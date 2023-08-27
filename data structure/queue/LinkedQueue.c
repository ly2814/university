//
// Created by 34043 on 2023/8/18.
// ����ʵ�ֶ���
//

#include <stdio.h>
#include <stdlib.h>

typedef int E;

struct LinkedNode{
    E element;
    struct LinkedNode * next;
};

typedef struct LinkedNode * Node;

struct Queue{
    Node front, rare;
};

typedef struct Queue * LinkedQueue;

_Bool init(LinkedQueue queue){
    Node node = malloc(sizeof (Node));
    if(node == NULL)    return 0;
    node->next = NULL;
    queue->front = queue->rare = node;
    return 1;
}

//���
_Bool offerQueue(LinkedQueue queue, E element){
    //��������ӽڵ�
    Node node = malloc(sizeof (Node));
    //�ж��Ƿ񴴽��ɹ�
    if (node == NULL)   return 0;
    //��Ԫ�ط���ڵ�
    node->element = element;
    //����ӽڵ�Ϊ�������ڵ�
    node->next = NULL;
    //���
    queue->rare->next = node;
    //�޸Ķ�βָ��
    queue->rare = node;
    return 1;
}

//�������
void printQueue(LinkedQueue queue){
    printf("<<<");
    //������
    Node node = queue->front->next;
    while (1){
        printf("%d ",node->element);
        //��ӡ�����һ��Ԫ��,��ֹѭ��
        if (node == queue->rare)    break;
        //����
        else    node = node->next;
    }
    printf("<<<\n");
}

//�����п�
_Bool isEmpty(LinkedQueue queue){
    return queue->front == queue->rare;
}

//����
E pollQueue(LinkedQueue queue){
    if (isEmpty(queue)) return 0;
    //�����ӽڵ�Ԫ����ȡ
    E e = queue->front->next->element;
    //�����ӽڵ���ȡ
    Node node = queue->front->next;
    //��ɾ���ڵ㲻�����һ���ڵ�
    //�������Ƚ��ȳ�,����ֻ�޸Ķ��׵ĺ�̽�㼴��
    queue->front->next = queue->front->next->next;
    //��ɾ���ڵ������һ���ڵ�
    if (node == queue->rare) queue->rare = queue->front;
    //�ͷſռ�
    free(node);
    //�����ѳ���Ԫ��
    return e;
}

int main(){
    struct Queue queue;
    init(&queue);
    for (int i = 0; i < 10; ++i) {
        offerQueue(&queue, i*100);
    }
    printQueue(&queue);
    while (!isEmpty(&queue)){
        printf("%d ", pollQueue(&queue));
    }
    return 0;
}