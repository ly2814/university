//
// Created by 34043 on 2023/8/27.
// ���ȼ�����
//
#include <stdio.h>
#include <stdlib.h>

//ΪԪ������ȡ����
typedef int T;
//�������н��ṹ�岢ȡ����
typedef struct QueueNode{
    T element;
    struct QueueNode * next;
}   * QNode;
//�������нṹ�岢ȡ����
typedef struct PriorityQueue{
    QNode front,rear;
} * Queue;
//��ʼ������
_Bool initQueue(Queue head){
    QNode node = malloc(sizeof (struct QueueNode));
    if (node == NULL)   return 0;
    head->front = head->rear = node;
    node->next = NULL;
    return 1;
}
//���
_Bool offerQueue(Queue queue, T element){
    QNode node = malloc(sizeof (struct QueueNode));
    if (node == NULL)   return 0;
    node->element = element;
    node->next = NULL;
    //��ʼ����������ǰ���ڵ�
    QNode pre = queue->front;
    //Ѱ�Ҵ��������ǰ�����,����Ϊ�����ȼ��������
    while (pre->next && pre->next->element >= element)
        //����
        pre = pre->next;
    //��������ǰ������Ѿ��Ƕ�β���,��ʱ��������
    if (pre == queue->rear){
        queue->rear->next = node;
        queue->rear = node;
    } else{ //�������㲻�Ƕ�β���,�޸Ĵ�������ָ��,��������ǰ���ڵ���ָ��
        node->next = pre->next;
        pre->next = node;
    }
    return 1;
}
//����
T pollQueue(Queue queue){
    T element = queue->front->next->element;
    QNode temp = queue->front->next;
    queue->front->next = queue->front->next->next;
    if (queue->rear == temp)    queue->rear = queue->front;
    free(temp);
    return element;
}
//���
void printQueue(Queue queue){
    QNode node = queue->front->next;
    while (1){
        printf("%d ", node->element);
        if (node == queue->rear)    break;
        else    node = node->next;;
    }
    printf("\n");
}

int main(){
    struct PriorityQueue queue;
    initQueue(&queue);
    offerQueue(&queue,9);
    offerQueue(&queue,4);
    offerQueue(&queue,7);
    offerQueue(&queue,3);
    offerQueue(&queue,13);
    printQueue(&queue);
}