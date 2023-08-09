//
// Created by 34043 on 2023/8/9.
//
#include <stdio.h>
#include <stdlib.h>
typedef int E;

//本程序为单链表实现程序
//读取数据优先选择顺序表
//处理数据优先选择顺序链表(写＞读)
struct ListNode{
    //元素
    E element;
    //后继节点指针,单链表无前驱节点
    struct ListNode* next;
};

//为单链表结构体指针起别名
typedef struct ListNode * Node;

//初始化
void initList(Node head){
    //头节点的后继节点默认为空
    head->next = NULL;
}

//时间复杂度O(n)
//head头节点
//element要插入的元素
//插入位置下标
_Bool insertList(Node head, E element, int index){
    //插入位置不合法
    if (index < 1)  return 0;
    //搜索前驱节点
    while (--index){
        //一个一个往下找
        head = head->next;
        //如果寻找过程中发现没有后继节点,即超出范围
        if(head == NULL) return 0;
    }
    //为新节点分配内存空间
    Node node = malloc(sizeof (struct ListNode));
    //如果创建节点失败返回0
    if(node->next == NULL)    return 0;
    //将元素放入节点
    node->element = element;
    //修改新插入节点的后继节点指向
    node->next = head->next;
    //修改新插入节点的前驱节点指向
    head->next = node;
    return 1;
}

//时间复杂度O(n)
//不支持随机访问
_Bool deleteList(Node head, int index){
    //如上判断是否合法
    if (index < 1)  return 0;
    //寻找前驱节点
    while (--index){
        head = head->next;
        if (head == NULL)   return 0;
    }
    //判断范围,如果前驱节点已经是最后一个节点,及超过范围
    if (head->next == NULL) return 0;
    //存储要删除的节点
    Node temp = head->next;
    //重新设置前驱节点的后继节点指向
    head->next = head->next->next;
    //释放空间
    free(temp);
    return 1;
}

//时间复杂度O(n)
E * getList(Node head, int index){
    //判断位置是否合法
    if (index < 1)  return 0;
    //因为头节点为空节点,故使用do while循环,指向非空节点
    do {
        head = head->next;
        //超出范围
        if (head == NULL) return 0;
    }   while (--index);//到达index结束
    //返回元素指针
    return &(head->element);
}

//O(n)
int findList(Node head, E element){
    //头节点为空,指向非空节点
    head = head->next;
    //计数器
    int i = 1;
    //到最后一个节点为止
    while (head){
        //找到返回1
        if (head->element == element)   return i;
        //没找到,向后看
        head = head->next;
        //计数器自增
        i++;
    }
    return -1;
}

//单链表长度
int listSize(Node head){
    //因为头节点为空,长度设为-1
    int size = -1;
    while (head){
        //一个接着一个找
        head = head->next;
        //长度记得自增
        size++;
    }
    return size;
}

//打印单链表
void printList(Node head){
    while (head->next){
        head = head->next;
        printf("%d ", head->element);
    }
}

int main(){
    struct ListNode head;
    initList(&head);
    printf("%d ", listSize(&head));
    for (int i = 1; i <= 3; ++i) {
        insertList(&head, i*100, i);
    }
    printList(&head);
    printf("%d ", *getList(&head, 3));
    printf("%d ", listSize(&head));
    printf("%d ", findList(&head, 400));
    return 0;
}
