//
// Created by 34043 on 2023/8/18.
//
#include <stdio.h>
#include <stdlib.h>

typedef int E;
typedef struct LinkedNode * Node;

//����ڵ�
struct LinkedNode{
    E element;
    Node next;
};

//��ʼ��ջ
void init(Node head){
    //ͷ�ڵ�������ڵ����
    head->next = NULL;
}

//��ջ
_Bool pushStack(Node head, E element){
    //Ϊ�½ڵ����ռ�
    Node node = malloc(sizeof (struct LinkedNode));
    //�ж��Ƿ����ɹ�
    if (node == NULL)   return 0;
    //װԪ��
    node->element = element;
    //�޸ĺ��
    node->next = head->next;
    //�޸�ǰ��
    head->next = node;
    return 1;
}

//��ӡջ��Ԫ��
void printStack(Node head){
    printf("| ");
    //ͷ�ڵ���Ԫ��,ָ����һ��
    head = head->next;
    while (head != NULL){
        //���Ԫ��
        printf("%d ", head->element);
        //����
        head = head->next;
    }
    printf("\n");
}

//ջ�Ƿ�Ϊ��
_Bool isEmpty(Node node){
    return node->next == NULL;
}

//��ջ
E popStack(Node head){
    //�п�,��ջ�޷���ջ
    if (isEmpty(head)) return 0;
    //����Ҫ��ջ�Ľڵ�,�����ͷſռ�
    Node top = head->next;
    //�޸�ָ��
    head->next = head->next->next;
    //��ȡԪ��
    E element = top->element;
    //�ͷſռ�
    free(top);
    //����Ԫ��
    return element;
}

struct LinkedNode convertNumber(int num){
    struct LinkedNode stack;
    init(&stack);
    while (num != 0){
        pushStack(&stack,num % 2);
        num = num / 2;
    }
    return stack;
}
int main(){
    int n = 6;
    struct LinkedNode stack = convertNumber(n);
    printStack(&stack);
}
