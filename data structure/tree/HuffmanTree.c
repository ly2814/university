//
// Created by 34043 on 2023/8/27.
// 哈夫曼树与哈夫曼编码
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//树
typedef char E;
typedef struct TreeNode{
    E element;
    struct TreeNode * left;
    struct TreeNode * right;
    //权重
    int value;
}   * Node;
//创建节点
Node createNode(E element, int value){
    Node node = malloc(sizeof (struct TreeNode));
    if (node == NULL)   return NULL;
    node->element = element;
    node->value = value;
    node->left = node->right = NULL;
    return node;
}
//中序遍历
void middle(Node root){
    if (root == NULL)   return;
    middle(root->left);
    printf("%c ",root->element);
    middle(root->right);
}

//优先级队列
typedef Node T;
typedef struct QueueNode{
    T element;
    struct QueueNode * next;
}   * QNode;
typedef struct PriorityQueue{
    QNode front,rear;
} * Queue;
_Bool initQueue(Queue head){
    QNode node = malloc(sizeof (struct QueueNode));
    if (node == NULL)   return 0;
    head->front = head->rear = node;
    node->next = NULL;
    return 1;
}
_Bool offerQueue(Queue queue, T element){
    QNode node = malloc(sizeof (struct QueueNode));
    if (node == NULL)   return 0;
    node->element = element;
    node->next = NULL;
    QNode pre = queue->front;
    while (pre->next && pre->next->element->value <= element->value)
        pre = pre->next;
    if (pre == queue->rear){
        queue->rear->next = node;
        queue->rear = node;
    } else{
        node->next = pre->next;
        pre->next = node;
    }
    return 1;
}
T pollQueue(Queue queue){
    T element = queue->front->next->element;
    QNode temp = queue->front->next;
    queue->front->next = queue->front->next->next;
    if (queue->rear == temp)    queue->rear = queue->front;
    free(temp);
    return element;
}
_Bool isEmptyQueue(Queue queue){
    return queue->front->next == queue->rear;
}
void printQueue(Queue queue){
    QNode node = queue->front->next;
    while (1){
        printf("%c ", node->element->element);
        if (node == queue->rear)    break;
        else    node = node->next;;
    }
    printf("\n");
}

//哈夫曼编码
char * encode(Node root,E e){
    //根结点为空直接返回NULL,编码为0
    if (root == NULL)   return NULL;
    //根结点不为空返回空字符串
    if (root->element == e) return "";
    //递归遍历左子树
    char * str = encode(root->left, e);
    //开始回溯
    char * s = malloc(sizeof(char) * 10);
    //记得初始化内存,三个参数分别为要初始化的内存空间指向,初始化值,空间大小
    memset(s,0,sizeof(char)*10);
    //左子树遍历结束
    if (str != NULL){
        //回溯数组中存储0
        s[0] = '0';
        //拼接字符串,将s拼接到字符串str后面
        str = strcat(s, str);
    } else{
        //遍历右子树
        str = encode(root->right, e);
        //结点不为空
        if (str != NULL){
            //编码为1
            s[0] = '1';
            //拼接字符串
            str = strcat(s, str);
        }
    }
    return str;
}

//输出哈夫曼编码
void printEncode(Node root, E e){
    printf("%c 的编码为: %s",e,encode(root,e));
    printf("\n");
}

int main(){
    struct PriorityQueue queue;
    initQueue(&queue);

    offerQueue(&queue,createNode('A',5));
    offerQueue(&queue,createNode('B',16));
    offerQueue(&queue,createNode('C',8));
    offerQueue(&queue,createNode('D',13));

    //构造哈夫曼树,直到队列中只剩下一个元素为止
    while (queue.front->next != queue.rear){
        //最小结点1
        Node left = pollQueue(&queue);
        //最小结点2
        Node right = pollQueue(&queue);
        //创建根结点:两个最小节点合并
        Node node = createNode(' ',left->value + right->value);
        //连接左子树
        node->left = left;
        //连接右子树
        node->right = right;
        //把树入栈
        offerQueue(&queue, node);
    }

    //将哈夫曼树出栈
    Node root = pollQueue(&queue);
    //打印哈夫曼编码
    printEncode(root,'A');
    printEncode(root,'B');
    printEncode(root,'C');
    printEncode(root,'D');
    return 0;
}