//
// Created by 34043 on 2023/8/17.
//
#include <stdio.h>
#include <stdlib.h>

//Ԫ�ر���
typedef int E;

//�ṹ��ָ�����
typedef struct LinkedList * Node;

//˫������ṹ��
struct LinkedList{
    //�ڵ�Ԫ��
    E element;
    //ǰ�ڵ�
    Node prev;
    //��ڵ�
    Node next;
};

//��ʼ��
void initList(Node node){
    //������ǰ��ڵ��Ϊ��
    node->prev = node->next = NULL;
}

//�������
_Bool insertList(Node head, int index, E element){
    //����������ʼ��Χ,���Ϸ�
    if (index < 1)  return 0;
    //Ѱ��Ŀ��ڵ��ǰ���ڵ�
    while (--index){
        //����
        head = head->next;
        //����������ֹ��Χ,���Ϸ�
        if (head == NULL)   return  0;
    }
    //Ϊ������ڵ�����ڴ�ռ�
    Node node = malloc(sizeof (struct LinkedList));
    //�ж��Ƿ����ɹ�
    if (node == NULL)   return 0;
    //���ô�����ڵ�Ԫ��
    node->element = element;
    //���������ڵ�ĺ�̽ڵ�
    if (head->next){    //������ڵ��к�̽ڵ�
        head->next->prev = node;    //�޸Ĵ������̽ڵ��ǰ���ڵ�ָ��
        node->next = head->next;    //���ô�����ڵ��̽ڵ�ָ��
    } else{ //������ڵ��޺�̽ڵ�
        node->next = NULL;  //������ڵ�ӦΪ�������һ��Ԫ��,�����̽ڵ�����ΪNULL
    }
    //�޸�ǰ���ڵ�ĺ�̽��ָ��
    head->next = node;
    //���ô�����ڵ��ǰ���ڵ�ָ��
    node->prev = head;
    return 1;
}

//ɾ������
_Bool deleteList(Node head, int index){
    //��ʼ��Χ�ж�
    if (index < 1)  return 0;
    //Ѱ�Ҵ�ɾ���ڵ��ǰ���ڵ�
    while (--index){
        //����
        head = head->next;
        //��ֹ��Χ�ж�
        if (head == NULL)   return 0;
    }
    if (head->next == NULL) return 0;
    //�����ɾ�����,�Ա�ɾ��
    Node temp = head->next;
    //�޸ĺ��
    if (head->next->next){  //��ɾ������к�̽ڵ�
        //�޸Ĵ�ɾ���ڵ�ĺ�̽ڵ��ǰ���ڵ�ָ��
        head->next->next->prev = head;
        //�޸Ĵ�ɾ������ǰ���ڵ�ĺ�̽ڵ�ָ��
        head->next = head->next->next;
    } else{ //��ɾ������޺�̽ڵ�
        head->next = NULL;
    }
    //�ͷŴ�ɾ���ڵ���ڴ�ռ�
    free(temp);
    return 1;
}

int main(){
    struct LinkedList head;
    initList(&head);
    for (int i = 1; i <= 5; i++)
        insertList(&head, i, i*100);
    deleteList(&head, 5);
    Node node = &head;
    //�������
    do {
        node = node->next;
        printf("%d->",node->element);
    } while (node->next != NULL);
    printf("\n");
    //�������
    do {
        printf("%d->", node->element);
        node = node->prev;
    } while (node->prev != NULL);
    return 0;
}
