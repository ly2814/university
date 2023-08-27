//
// Created by 34043 on 2023/8/27.
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
    int value;
}   * Node;
Node createNode(E element, int value){
    Node node = malloc(sizeof (struct TreeNode));
    if (node == NULL)   return NULL;
    node->element = element;
    node->value = value;
    node->left = node->right = NULL;
    return node;
}
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

char * encode(Node root,E e){
    if (root == NULL)   return NULL;
    if (root->element == e) return "";
    char * str = encode(root->left, e);
    char * s = malloc(sizeof(char) * 10);
    memset(s,0,sizeof(char)*10);
    if (str != NULL){
        s[0] = '0';
        str = strcat(s, str);
    } else{
        str = encode(root->right, e);
        if (str != NULL){
            s[0] = '1';
            str = strcat(s, str);
        }
    }
    return str;
}

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

    while (!isEmptyQueue(&queue)){
        Node left = pollQueue(&queue);
        Node right = pollQueue(&queue);
        Node node = createNode(' ',left->value + right->value);
        node->left = left;
        node->right = right;
        offerQueue(&queue, node);
    }

    Node root = pollQueue(&queue);
    printEncode(root,'A');
    printEncode(root,'B');
    printEncode(root,'C');
    printEncode(root,'D');
    return 0;
}