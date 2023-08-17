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

//初始化
_Bool initQueue(ArrayQueue queue){
    //分配内存空间
    queue->array = malloc(sizeof (E) * 10);
    //判断空间是否分配成功
    if (queue->array == NULL)   return  0;
    //设置队列容量
    queue->capacity = 10;
    //空队列头节点尾结点相同
    queue->front = queue->rear = 0;
    return 1;
}

//入队
_Bool offerQueue(ArrayQueue queue, E element){
    //计算待插入位置
    if ((queue->rear + 1) % queue->capacity == queue->front)
        return 0;
    //更新位置
    queue->rear = (queue->rear + 1) % queue->capacity;
    //入队
    queue->array[queue->rear] = element;
    return 1;
}

//遍历队列
void printQueue(ArrayQueue queue){
    printf("<<<");
    //从头元素开始
    int i = queue->front;
    do {
        //计算下一个元素位置
        i = (i + 1) % queue->capacity;
        //输出元素
        printf("%d ", queue->array[i]);
    } while (i != queue->rear); //直到i=尾元素位置
    printf("\n");
}

//队列判空
_Bool isEmpty(ArrayQueue queue){
    return queue->front == queue->rear;
}

//出队
E pollQueue(ArrayQueue queue){
    //后移队首指针
    queue->front = (queue->front + 1) % queue->capacity;
    //返回元素
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