//
// Created by 34043 on 2023/8/17.
//
#include <stdio.h>
#include <stdlib.h>

typedef int E;
typedef struct Queue * ArrayQueue;

struct Queue{
    E * array;
    int capacity;
    int front,rear;
};

//��ʼ��
_Bool initQueue(ArrayQueue queue){
    //�����ڴ�ռ�
    queue->array = malloc(sizeof (E) * 10);
    //�жϿռ��Ƿ����ɹ�
    if (queue->array == NULL)   return  0;
    //���ö�������
    queue->capacity = 10;
    //�ն���ͷ�ڵ�β�����ͬ
    queue->front = queue->rear = 0;
    return 1;
}

//���
_Bool offerQueue(ArrayQueue queue, E element){
    //���������λ��
    if ((queue->rear + 1) % queue->capacity == queue->front)
        return 0;
    //����λ��
    queue->rear = (queue->rear + 1) % queue->capacity;
    //���
    queue->array[queue->rear] = element;
    return 1;
}

//��������
void printQueue(ArrayQueue queue){
    printf("<<<");
    //��ͷԪ�ؿ�ʼ
    int i = queue->front;
    do {
        //������һ��Ԫ��λ��
        i = (i + 1) % queue->capacity;
        //���Ԫ��
        printf("%d ", queue->array[i]);
    } while (i != queue->rear); //ֱ��i=βԪ��λ��
    printf("\n");
}

//�����п�
_Bool isEmpty(ArrayQueue queue){
    return queue->front == queue->rear;
}

//����
E pollQueue(ArrayQueue queue){
    //���ƶ���ָ��
    queue->front = (queue->front + 1) % queue->capacity;
    //����Ԫ��
    return queue->array[queue->front];
}

int main(){
    struct Queue queue;
    initQueue(&queue);
    for (int i = 0; i < 10; ++i) {
        offerQueue(&queue, i * 100);
    }
    printQueue(&queue);
    while (!isEmpty(&queue))
        printf("%d ", pollQueue(&queue));
    return 0;
}