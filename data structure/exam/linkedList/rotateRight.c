//
// Created by 34043 on 2023/8/18.
//

/**
 * ��ת����
 * ʹ�õ����ݽṹ:������,ѭ������
 * ����˼·:����������,����������ѭ������,�����ƶ����ͷ���λ��,Ѱ��ͷ���,�Ͽ�����
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
    //������ֱ�ӷ���
    if(head == NULL || k == 0) return head;
    //����ͷ���
    struct ListNode * node = head;
    //�����ȳ�ʼ��
    int len = 1;
    //���㳤��
    while(node->next){
        node = node->next;
        len++;
    }
    //�������ƶ�������ͬ�ͷ���
    if(len == k)    return head;
    //ѭ������
    node->next = head;
    //����ͷ���λ��
    int index = len - k % len;
    //����ָ��ͷ���
    node = head;
    //Ѱ��ͷ�ڵ��ǰ�����
    while(--index)  node = node->next;
    //����ͷ���
    head = node->next;
    //�Ͽ�����
    node->next = NULL;
    return head;
}