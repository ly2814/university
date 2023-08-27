//
// Created by 34043 on 2023/8/25.
//

#include <stdio.h>
#include <stdlib.h>
typedef char E;

//�������ݽṹ
typedef struct TreeNode{
    E element;
    struct TreeNode * left;
    struct TreeNode * right;
    int flag;
} *  Node;

//��ջ��Ԫ����������Ϊ���Ľ��
typedef Node T;   //����ջ��Ԫ�����Ͷ���Ϊ�����Node��Ҳ���Ƕ��������ָ��
//ջ�����ݽṹ
struct StackNode {
    T element;
    struct StackNode * next;
};
//���ñ���
typedef struct StackNode * SNode;  //���������ΪSNode����Ȼ�������ͻ�˾Ͳ�����
//��ʼ��ջ
void initStack(SNode head){
    head->next = NULL;
}
//��ջ
_Bool pushStack(SNode head, T element){
    SNode node = malloc(sizeof(struct StackNode));
    if(node == NULL) return 0;
    node->next = head->next;
    node->element = element;
    head->next = node;
    return 1;
}
//ջ�Ƿ�Ϊ��
_Bool isEmpty(SNode head){
    return head->next == NULL;
}
//��ջ
T popStack(SNode head){
    SNode top = head->next;
    head->next = head->next->next;
    T e = top->element;
    free(top);
    return e;
}
//ջ��
T peekStack(SNode head){
    return head->next->element;
}

//���н��
typedef struct QueueNode{
    T element;
    struct QueueNode * next;
} * QNode;
typedef struct Queue{
    QNode front, rear;
} * LinkedQueue;
//��ʼ��
_Bool initQueue(LinkedQueue queue){
    QNode node = malloc(sizeof (struct QueueNode));
    if (node == NULL)   return 0;
    queue->front = queue->rear = node;
    return 1;
}
//���
_Bool offerQueue(LinkedQueue queue, T element){
    QNode node = malloc(sizeof (struct QueueNode));
    if (node == NULL)   return 0;
    node->element = element;
    queue->rear->next = node;
    queue->rear = node;
    return 1;
}
//�����п�
_Bool isEmptyQueue(LinkedQueue queue){
    return  queue->front == queue->rear;
}
//����
T pollQueue(LinkedQueue queue){
    T element = queue->front->next->element;
    QNode temp = queue->front->next;
    queue->front->next = queue->front->next->next;
    if (queue->rear == temp) queue->rear = queue->front;
    free(temp);
    return element;
}

//ǰ�����:�ݹ�
void pre(Node root){
    //�ս�㷵��
    if (root == NULL)   return;
    //��ӡ
    printf("%c ",root->element);
    //��������ݹ�
    pre(root->left);
    //�Ҳ������ݹ�
    pre(root->right);
}
//ǰ������ǵݹ�ʹ��ջ
void preByStack(Node root){
    struct StackNode head;
    initStack(&head);
    while (root || !isEmpty(&head)){
        //����������
        while (root){
            //��ӡ
            printf("%c",root->element);
            //��ջ
            pushStack(&head, root);
            //����������
            root = root->left;
        }
        //��ջ
        Node node = popStack(&head);
        //������������
        root = node->right;
    }
}

//�������
void middle(Node root){
    if (root==NULL) return;
    //����������
    middle(root->left);
    //������
    printf("%c ",root->element);
    //����������
    middle(root->right);
}
//��������ǵݹ�ʹ��ջ
void middleByStack(Node root){
    struct StackNode stack;
    initStack(&stack);
    while (root || !isEmpty(&stack)){
        //�ȱ���������
        while (root){
            pushStack(&stack, root);
            //������������
            root = root->left;
        }
        //��ջ
        Node node = popStack(&stack);
        //���
        printf("%c ", node->element);
        //������������
        root = node->right;
    }
}

//�������
void post(Node root){
    if (root == NULL)   return;
    //����������
    post(root->left);
    //����������
    post(root->right);
    //������
    printf("%c ",root->element);
}
//��������ǵݹ�ʹ��ջ
void postByStack(Node root){
    //����ջ
    struct StackNode stack;
    //��ʼ��ջ
    initStack(&stack);
    //��ʼ����
    while (root || !isEmpty(&stack)){
        //����������
        while (root){
            //ÿ�������ջ
            pushStack(&stack,root);
            //���øý���Ѿ�������������
            root->flag = 0;
            //����
            root = root->left;
        }
        //�������������,��ʱrootΪ��,��ջ��Ԫ��ָ��root
        root = peekStack(&stack);
        //�жϸýڵ��Ƿ��������������,����������ʼ����������
        if (root->flag == 0){
            //���øý���Ѿ�������������
            root->flag = 1;
            //����(������)
            root = root->right;
        } else{ //�÷�֧Ϊ����������������
            //���Ԫ��
            printf("%c ",root->element);
            //��ջ
            popStack(&stack);
            //���ڵ��ÿ�
            root = NULL;
        }
    }
}

//�������
void levelByQueue(Node root){
    //��������
    struct Queue queue;
    //��ʼ��
    initQueue(&queue);
    //���ڵ����
    offerQueue(&queue, root);
    while (!isEmptyQueue(&queue)){
        //����
        Node node = pollQueue(&queue);
        //���
        printf("%c ",node->element);
        //��������
        if (node->left)
            //���������
            offerQueue(&queue,node->left);
        //��������
        if (node->right)
            //���������
            offerQueue(&queue,node->right);
    }
}

int main(){
    Node a = malloc(sizeof (struct TreeNode));
    Node b = malloc(sizeof (struct TreeNode));
    Node c = malloc(sizeof (struct TreeNode));
    Node d = malloc(sizeof (struct TreeNode));
    Node e = malloc(sizeof (struct TreeNode));
    Node f = malloc(sizeof (struct TreeNode));
    a->element = 'a';
    b->element = 'b';
    c->element = 'c';
    d->element = 'd';
    e->element = 'e';
    f->element = 'f';

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = NULL;
    c->right = f;
    f->left = NULL;
    f->right = NULL;
    d->left = NULL;
    d->right = NULL;
    e->left = NULL;
    e->right = NULL;

//    printf("%c",a->left->right->element);
//    pre(a);
//    preByStack(a);
//    middle(a);
//    middleByStack(a);
//    post(a);
//    postByStack(a);
    levelByQueue(a);
    return 0;
}