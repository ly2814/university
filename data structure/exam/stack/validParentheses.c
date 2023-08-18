//
// Created by 34043 on 2023/8/18.
//

/**
 * 有效的括号
 * 使用的数据结构:栈
 * 解题思路:遍历字符串,若元素为左侧括号则入栈,若为右侧括号即出栈,将出栈的元素进行比较,不相等即为无效的括号
 * 难点:比较的思路
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char E;

typedef struct LinkedNode * Node;

//链表节点
struct LinkedNode{
    E element;
    Node next;
};


//初始化栈
void init(Node head){
    //头节点外其余节点皆无
    head->next = NULL;
}

//入栈
_Bool pushStack(Node head, E element){
    //为新节点分配空间
    Node node = malloc(sizeof (struct LinkedNode));
    //判断是否分配成功
    if (node == NULL)   return 0;
    //装元素
    node->element = element;
    //修改后继
    node->next = head->next;
    //修改前驱
    head->next = node;
    return 1;
}

//打印栈内元素
void printStack(Node head){
    printf("| ");
    //头节点无元素,指向下一个
    head = head->next;
    while (head != NULL){
        //输出元素
        printf("%d ", head->element);
        //遍历
        head = head->next;
    }
    printf("\n");
}

//栈是否为空
_Bool isEmpty(Node node){
    return node->next == NULL;
}

//出栈
E popStack(Node head){
    //判空,空栈无法出栈
    if (isEmpty(head)) return 0;
    //保存要出栈的节点,方便释放空间
    Node top = head->next;
    //修改指向
    head->next = head->next->next;
    //提取元素
    E element = top->element;
    //释放空间
    free(top);
    //返回元素
    return element;
}

bool isValid(char * s){
    //计算字符串长度
    unsigned long len = strlen(s);
    //长度为奇数直接返回false,因为括号只能成对出现
    if(len % 2 == 1) return false;
    //声明栈
    struct LinkedNode stack;
    //初始化栈
    init(&stack);
    //遍历数组
    for(int i = 0; i < len; i++){
        //临时变量存储数组元素
        char c = s[i];
        //若为左括号入栈
        if(c == '(' || c == '{' || c == '[')    {pushStack(&stack,c);}
        //不为左括号则与栈内元素进行比较,因为栈是先进后出,所以保证数据
        else{
            //栈若空,即为没有左括号,只有右括号
            if(isEmpty(&stack)) return false;
            //比较
            if(c == ')'){
                //栈内保存的只有左侧括号,不符合即为无效的括号,例如[)
                if(popStack(&stack) != '(')   return false;
            }   else if(c == '}'){
                //栈内保存的只有左侧括号,不符合即为无效的括号,例如[}
                if(popStack(&stack) != '{')   return false;
            }   else if(c == ']'){
                //栈内保存的只有左侧括号,不符合即为无效的括号,例如(]
                if(popStack(&stack) != '[')   return false;
            }
        }
    }
    //如果为空栈,即字符串全部匹配成功,栈内元素全部出栈,若不是空栈,即有元素没有匹配成功;
    return isEmpty(&stack);
}
