//
// Created by 34043 on 2023/8/18.
//

/**
 * ��Ч������
 * ʹ�õ����ݽṹ:ջ
 * ����˼·:�����ַ���,��Ԫ��Ϊ�����������ջ,��Ϊ�Ҳ����ż���ջ,����ջ��Ԫ�ؽ��бȽ�,����ȼ�Ϊ��Ч������
 * �ѵ�:�Ƚϵ�˼·
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char E;

typedef struct LinkedNode * Node;

//����ڵ�
struct LinkedNode{
    E element;
    Node next;
};


//��ʼ��ջ
void init(Node head){
    //ͷ�ڵ�������ڵ����
    head->next = NULL;
}

//��ջ
_Bool pushStack(Node head, E element){
    //Ϊ�½ڵ����ռ�
    Node node = malloc(sizeof (struct LinkedNode));
    //�ж��Ƿ����ɹ�
    if (node == NULL)   return 0;
    //װԪ��
    node->element = element;
    //�޸ĺ��
    node->next = head->next;
    //�޸�ǰ��
    head->next = node;
    return 1;
}

//��ӡջ��Ԫ��
void printStack(Node head){
    printf("| ");
    //ͷ�ڵ���Ԫ��,ָ����һ��
    head = head->next;
    while (head != NULL){
        //���Ԫ��
        printf("%d ", head->element);
        //����
        head = head->next;
    }
    printf("\n");
}

//ջ�Ƿ�Ϊ��
_Bool isEmpty(Node node){
    return node->next == NULL;
}

//��ջ
E popStack(Node head){
    //�п�,��ջ�޷���ջ
    if (isEmpty(head)) return 0;
    //����Ҫ��ջ�Ľڵ�,�����ͷſռ�
    Node top = head->next;
    //�޸�ָ��
    head->next = head->next->next;
    //��ȡԪ��
    E element = top->element;
    //�ͷſռ�
    free(top);
    //����Ԫ��
    return element;
}

bool isValid(char * s){
    //�����ַ�������
    unsigned long len = strlen(s);
    //����Ϊ����ֱ�ӷ���false,��Ϊ����ֻ�ܳɶԳ���
    if(len % 2 == 1) return false;
    //����ջ
    struct LinkedNode stack;
    //��ʼ��ջ
    init(&stack);
    //��������
    for(int i = 0; i < len; i++){
        //��ʱ�����洢����Ԫ��
        char c = s[i];
        //��Ϊ��������ջ
        if(c == '(' || c == '{' || c == '[')    {pushStack(&stack,c);}
        //��Ϊ����������ջ��Ԫ�ؽ��бȽ�,��Ϊջ���Ƚ����,���Ա�֤����
        else{
            //ջ����,��Ϊû��������,ֻ��������
            if(isEmpty(&stack)) return false;
            //�Ƚ�
            if(c == ')'){
                //ջ�ڱ����ֻ���������,�����ϼ�Ϊ��Ч������,����[)
                if(popStack(&stack) != '(')   return false;
            }   else if(c == '}'){
                //ջ�ڱ����ֻ���������,�����ϼ�Ϊ��Ч������,����[}
                if(popStack(&stack) != '{')   return false;
            }   else if(c == ']'){
                //ջ�ڱ����ֻ���������,�����ϼ�Ϊ��Ч������,����(]
                if(popStack(&stack) != '[')   return false;
            }
        }
    }
    //���Ϊ��ջ,���ַ���ȫ��ƥ��ɹ�,ջ��Ԫ��ȫ����ջ,�����ǿ�ջ,����Ԫ��û��ƥ��ɹ�;
    return isEmpty(&stack);
}
