//
// Created by 34043 on 2023/8/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * 删除重复元素
 * 使用的数据结构:单链表
 * 解题思路:找到重复元素的前驱结点,修改指向,返回头结点
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head){
    if (head == NULL)   return head;
    struct ListNode* node = head;
    //寻找重复节点的第一个节点
    while (node->next != NULL){
        if (node->val == node->next->val)
            node->next = node->next->next;
        else
            node = node->next;
    }
    return head;
}