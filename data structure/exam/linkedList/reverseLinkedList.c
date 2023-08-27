//
// Created by 34043 on 2023/8/18.
//
/**
 * 反转链表
 * 使用的数据结构:单链表
 * 解题思路:双指针 临时变量
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head){
    //定义两个指针,一个为新链表的头指针,一个暂存参数头指针的下一个
    struct ListNode * newHead = NULL, * temp;
    while (head){
        //保存头结点的后继结点
        temp = head->next;
        //将头结点的后继节点置空
        head->next = newHead;
        //设置新头结点
        newHead = head;
        //迭代
        head = temp;
    }
    return newHead;
}
