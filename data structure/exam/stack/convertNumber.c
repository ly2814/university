//
// Created by 34043 on 2023/8/18.
//
#include <stdio.h>
#include <stdlib.h>

typedef int E;
typedef struct LinkedNode * Node;

//链表节点
struct LinkedNode{
    E element;
    Node next;
};

//初始化栈
void init(Node head){
    //头节点外其余节点皆无
    head->next = NULL;
}

//入栈
_Bool pushStack(Node head, E element){
    //为新节点分配空间
    Node node = malloc(sizeof (struct LinkedNode));
    //判断是否分配成功
    if (node == NULL)   return 0;
    //装元素
    node->element = element;
    //修改后继
    node->next = head->next;
    //修改前驱
    head->next = node;
    return 1;
}

//打印栈内元素
void printStack(Node head){
    printf("| ");
    //头节点无元素,指向下一个
    head = head->next;
    while (head != NULL){
        //输出元素
        printf("%d ", head->element);
        //遍历
        head = head->next;
    }
    printf("\n");
}

//栈是否为空
_Bool isEmpty(Node node){
    return node->next == NULL;
}

//出栈
E popStack(Node head){
    //判空,空栈无法出栈
    if (isEmpty(head)) return 0;
    //保存要出栈的节点,方便释放空间
    Node top = head->next;
    //修改指向
    head->next = head->next->next;
    //提取元素
    E element = top->element;
    //释放空间
    free(top);
    //返回元素
    return element;
}

struct LinkedNode convertNumber(int num){
    struct LinkedNode stack;
    init(&stack);
    while (num != 0){
        pushStack(&stack,num % 2);
        num = num / 2;
    }
    return stack;
}
int main(){
    int n = 6;
    struct LinkedNode stack = convertNumber(n);
    printStack(&stack);
}
