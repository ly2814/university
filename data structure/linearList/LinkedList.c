//
// Created by 34043 on 2023/8/9.
//
#include <stdio.h>
#include <stdlib.h>
typedef int E;

struct ListNode{
    E element;
    struct ListNode* next;
};

typedef struct ListNode * Node;

void initList(Node node){
    node->next = NULL;
}

_Bool insertList(Node head, E element, int index){
    if (index < 1)  return 0;
    while (--index){
        head = head->next;
        if(head->next == NULL) return 0;
    }
    Node node = malloc(sizeof (struct ListNode));
    if(node == NULL)    return 0;
    node->element = element;
    node->next = head->next;
    head->next = node;
    return 1;
}

void printList(Node head){
    while (head->next)
        head = head->next;
        printf("%d",head->element);
}

int main(){
    struct ListNode head;
    initList(&head);
    for (int i=0; i<3; i++)
        insertList(&head, 1*100, i;)
    printList(&head)
    return 0;
}
