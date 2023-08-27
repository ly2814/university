//
// Created by 34043 on 2023/8/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * ɾ���ظ�Ԫ��
 * ʹ�õ����ݽṹ:������
 * ����˼·:�ҵ��ظ�Ԫ�ص�ǰ�����,�޸�ָ��,����ͷ���
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
    //Ѱ���ظ��ڵ�ĵ�һ���ڵ�
    while (node->next != NULL){
        if (node->val == node->next->val)
            node->next = node->next->next;
        else
            node = node->next;
    }
    return head;
}