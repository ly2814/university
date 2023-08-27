//
// Created by 34043 on 2023/8/9.
//
#include <stdio.h>
#include <stdlib.h>
typedef int E;

//������Ϊ������ʵ�ֳ���
//��ȡ��������ѡ��˳���
//������������ѡ��˳������(д����)
struct ListNode{
    //Ԫ��
    E element;
    //��̽ڵ�ָ��,��������ǰ���ڵ�
    struct ListNode* next;
};

//Ϊ������ṹ��ָ�������
typedef struct ListNode * Node;

//��ʼ��
void initList(Node head){
    //ͷ�ڵ�ĺ�̽ڵ�Ĭ��Ϊ��
    head->next = NULL;
}

//ʱ�临�Ӷ�O(n)
//headͷ�ڵ�
//elementҪ�����Ԫ��
//����λ���±�
_Bool insertList(Node head, E element, int index){
    //����λ�ò��Ϸ�
    if (index < 1)  return 0;
    //����ǰ���ڵ�
    while (--index){
        //һ��һ��������
        head = head->next;
        //���Ѱ�ҹ����з���û�к�̽ڵ�,��������Χ
        if(head == NULL) return 0;
    }
    //Ϊ�½ڵ�����ڴ�ռ�
    Node node = malloc(sizeof (struct ListNode));
    //��������ڵ�ʧ�ܷ���0
    if(node->next == NULL)    return 0;
    //��Ԫ�ط���ڵ�
    node->element = element;
    //�޸��²���ڵ�ĺ�̽ڵ�ָ��
    node->next = head->next;
    //�޸��²���ڵ��ǰ���ڵ�ָ��
    head->next = node;
    return 1;
}

//ʱ�临�Ӷ�O(n)
//��֧���������
_Bool deleteList(Node head, int index){
    //�����ж��Ƿ�Ϸ�
    if (index < 1)  return 0;
    //Ѱ��ǰ���ڵ�
    while (--index){
        head = head->next;
        if (head == NULL)   return 0;
    }
    //�жϷ�Χ,���ǰ���ڵ��Ѿ������һ���ڵ�,��������Χ
    if (head->next == NULL) return 0;
    //�洢Ҫɾ���Ľڵ�
    Node temp = head->next;
    //��������ǰ���ڵ�ĺ�̽ڵ�ָ��
    head->next = head->next->next;
    //�ͷſռ�
    free(temp);
    return 1;
}

//ʱ�临�Ӷ�O(n)
E * getList(Node head, int index){
    //�ж�λ���Ƿ�Ϸ�
    if (index < 1)  return 0;
    //��Ϊͷ�ڵ�Ϊ�սڵ�,��ʹ��do whileѭ��,ָ��ǿսڵ�
    do {
        head = head->next;
        //������Χ
        if (head == NULL) return 0;
    }   while (--index);//����index����
    //����Ԫ��ָ��
    return &(head->element);
}

//O(n)
int findList(Node head, E element){
    //ͷ�ڵ�Ϊ��,ָ��ǿսڵ�
    head = head->next;
    //������
    int i = 1;
    //�����һ���ڵ�Ϊֹ
    while (head){
        //�ҵ�����1
        if (head->element == element)   return i;
        //û�ҵ�,���
        head = head->next;
        //����������
        i++;
    }
    return -1;
}

//��������
int listSize(Node head){
    //��Ϊͷ�ڵ�Ϊ��,������Ϊ-1
    int size = -1;
    while (head){
        //һ������һ����
        head = head->next;
        //���ȼǵ�����
        size++;
    }
    return size;
}

//��ӡ������
void printList(Node head){
    while (head->next){
        head = head->next;
        printf("%d ", head->element);
    }
}

int main(){
    struct ListNode head;
    initList(&head);
    printf("%d ", listSize(&head));
    for (int i = 1; i <= 3; ++i) {
        insertList(&head, i*100, i);
    }
    printList(&head);
    printf("%d ", *getList(&head, 3));
    printf("%d ", listSize(&head));
    printf("%d ", findList(&head, 400));
    return 0;
}
