//
// Created by 34043 on 2023/8/18.
//
/**
 * ��ת����
 * ʹ�õ����ݽṹ:������
 * ����˼·:˫ָ�� ��ʱ����
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
    //��������ָ��,һ��Ϊ�������ͷָ��,һ���ݴ����ͷָ�����һ��
    struct ListNode * newHead = NULL, * temp;
    while (head){
        //����ͷ���ĺ�̽��
        temp = head->next;
        //��ͷ���ĺ�̽ڵ��ÿ�
        head->next = newHead;
        //������ͷ���
        newHead = head;
        //����
        head = temp;
    }
    return newHead;
}
