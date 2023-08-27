//
// Created by 34043 on 2023/8/27.
// 优先级队列
//
#include <stdio.h>
#include <stdlib.h>

//为元素类型取别名
typedef int T;
//声明队列结点结构体并取别名
typedef struct QueueNode{
    T element;
    struct QueueNode * next;
}   * QNode;
//声明队列结构体并取别名
typedef struct PriorityQueue{
    QNode front,rear;
} * Queue;
//初始化队列
_Bool initQueue(Queue head){
    QNode node = malloc(sizeof (struct QueueNode));
    if (node == NULL)   return 0;
    head->front = head->rear = node;
    node->next = NULL;
    return 1;
}
//入队
_Bool offerQueue(Queue queue, T element){
    QNode node = malloc(sizeof (struct QueueNode));
    if (node == NULL)   return 0;
    node->element = element;
    node->next = NULL;
    //初始化待插入结点前驱节点
    QNode pre = queue->front;
    //寻找待插入结点的前驱结点,规则为按优先级降序查找
    while (pre->next && pre->next->element >= element)
        //迭代
        pre = pre->next;
    //待插入结点前驱结点已经是队尾结点,此时正常插入
    if (pre == queue->rear){
        queue->rear->next = node;
        queue->rear = node;
    } else{ //待插入结点不是队尾结点,修改待插入后继指向,待插入结点前驱节点后继指向
        node->next = pre->next;
        pre->next = node;
    }
    return 1;
}
//出队
T pollQueue(Queue queue){
    T element = queue->front->next->element;
    QNode temp = queue->front->next;
    queue->front->next = queue->front->next->next;
    if (queue->rear == temp)    queue->rear = queue->front;
    free(temp);
    return element;
}
//输出
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