//
// Created by 34043 on 2023/8/17.
//
#include <stdio.h>
#include <stdlib.h>

//元素别名
typedef int E;

//结构体指针别名
typedef struct LinkedList * Node;

//双向链表结构体
struct LinkedList{
    //节点元素
    E element;
    //前节点
    Node prev;
    //后节点
    Node next;
};

//初始化
void initList(Node node){
    //空链表前后节点皆为空
    node->prev = node->next = NULL;
}

//插入操作
_Bool insertList(Node head, int index, E element){
    //超出链表起始范围,不合法
    if (index < 1)  return 0;
    //寻找目标节点的前驱节点
    while (--index){
        //遍历
        head = head->next;
        //超出链表终止范围,不合法
        if (head == NULL)   return  0;
    }
    //为待插入节点分配内存空间
    Node node = malloc(sizeof (struct LinkedList));
    //判断是否分配成功
    if (node == NULL)   return 0;
    //设置待插入节点元素
    node->element = element;
    //处理待插入节点的后继节点
    if (head->next){    //待插入节点有后继节点
        head->next->prev = node;    //修改待插入后继节点的前驱节点指向
        node->next = head->next;    //设置待插入节点后继节点指向
    } else{ //待插入节点无后继节点
        node->next = NULL;  //待插入节点应为链表最后一个元素,故其后继节点设置为NULL
    }
    //修改前驱节点的后继结点指向
    head->next = node;
    //设置待插入节点的前驱节点指向
    node->prev = head;
    return 1;
}

//删除操作
_Bool deleteList(Node head, int index){
    //起始范围判断
    if (index < 1)  return 0;
    //寻找待删除节点的前驱节点
    while (--index){
        //遍历
        head = head->next;
        //终止范围判断
        if (head == NULL)   return 0;
    }
    if (head->next == NULL) return 0;
    //保存待删除结点,以便删除
    Node temp = head->next;
    //修改后继
    if (head->next->next){  //待删除结点有后继节点
        //修改待删除节点的后继节点的前驱节点指向
        head->next->next->prev = head;
        //修改待删除结点的前驱节点的后继节点指向
        head->next = head->next->next;
    } else{ //待删除结点无后继节点
        head->next = NULL;
    }
    //释放待删除节点的内存空间
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
    do {
        node = node->next;
        printf("%d->",node->element);
    } while (node->next != NULL);
    printf("\n");
    do {
        printf("%d->", node->element);
        node = node->prev;
    } while (node->prev != NULL);
    return 0;
}
