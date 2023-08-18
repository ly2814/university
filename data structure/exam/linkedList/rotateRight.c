//
// Created by 34043 on 2023/8/18.
//

/**
 * 旋转链表
 * 使用的数据结构:单链表,循环链表
 * 解题思路:先求链表长度,将单链表变成循环链表,计算移动后的头结点位置,寻找头结点,断开链表
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

struct ListNode* rotateRight(struct ListNode* head, int k){
    //空链表直接返回
    if(head == NULL || k == 0) return head;
    //保存头结点
    struct ListNode * node = head;
    //链表长度初始化
    int len = 1;
    //计算长度
    while(node->next){
        node = node->next;
        len++;
    }
    //长度与移动长度相同就返回
    if(len == k)    return head;
    //循环链表
    node->next = head;
    //计算头结点位置
    int index = len - k % len;
    //重新指向头结点
    node = head;
    //寻找头节点的前驱结点
    while(--index)  node = node->next;
    //设置头结点
    head = node->next;
    //断开链表
    node->next = NULL;
    return head;
}