//
// Created by 34043 on 2023/8/18.
// 链表实现队列
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

//入队
_Bool offerQueue(LinkedQueue queue, E element){
    //创建待入队节点
    Node node = malloc(sizeof (Node));
    //判断是否创建成功
    if (node == NULL)   return 0;
    //将元素放入节点
    node->element = element;
    //待入队节点为队列最后节点
    node->next = NULL;
    //入队
    queue->rare->next = node;
    //修改队尾指向
    queue->rare = node;
    return 1;
}

//输出队列
void printQueue(LinkedQueue queue){
    printf("<<<");
    //迭代项
    Node node = queue->front->next;
    while (1){
        printf("%d ",node->element);
        //打印到最后一个元素,终止循环
        if (node == queue->rare)    break;
        //迭代
        else    node = node->next;
    }
    printf("<<<\n");
}

//队列判空
_Bool isEmpty(LinkedQueue queue){
    return queue->front == queue->rare;
}

//出队
E pollQueue(LinkedQueue queue){
    if (isEmpty(queue)) return 0;
    //待出队节点元素提取
    E e = queue->front->next->element;
    //待出队节点提取
    Node node = queue->front->next;
    //被删除节点不是最后一个节点
    //队列是先进先出,所以只修改队首的后继结点即可
    queue->front->next = queue->front->next->next;
    //被删除节点是最后一个节点
    if (node == queue->rare) queue->rare = queue->front;
    //释放空间
    free(node);
    //返回已出队元素
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