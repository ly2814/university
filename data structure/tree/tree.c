//
// Created by 34043 on 2023/8/25.
//

#include <stdio.h>
#include <stdlib.h>
typedef char E;

typedef struct TreeNode{
    E element;
    struct TreeNode * left;
    struct TreeNode * right;
} *  Node;

typedef Node T;   //这里栈内元素类型定义为上面的Node，也就是二叉树结点指针

struct StackNode {
    T element;
    struct StackNode * next;
};

typedef struct StackNode * SNode;  //这里就命名为SNode，不然跟上面冲突了就不好了

void initStack(SNode head){
    head->next = NULL;
}

_Bool pushStack(SNode head, T element){
    SNode node = malloc(sizeof(struct StackNode));
    if(node == NULL) return 0;
    node->next = head->next;
    node->element = element;
    head->next = node;
    return 1;
}

_Bool isEmpty(SNode head){
    return head->next == NULL;
}

T popStack(SNode head){
    SNode top = head->next;
    head->next = head->next->next;
    T e = top->element;
    free(top);
    return e;
}

//前序遍历:递归
void pre(Node root){
    //空结点返回
    if (root == NULL)   return;
    //打印
    printf("%c ",root->element);
    //左侧子树递归
    pre(root->left);
    //右侧子树递归
    pre(root->right);
}
//谦虚遍历非递归使用栈
void preByStack(Node root){
    struct StackNode head;
    initStack(&head);
    while (root || !isEmpty(&head)){
        while (root){
            printf("%c",root->element);
            pushStack(&head, root);
            root = root->left;
        }
        Node node = popStack(&head);
        root = node->right;
    }
}

void middle(){}

void back(){}

int main(){
    Node a = malloc(sizeof (struct TreeNode));
    Node b = malloc(sizeof (struct TreeNode));
    Node c = malloc(sizeof (struct TreeNode));
    Node d = malloc(sizeof (struct TreeNode));
    Node e = malloc(sizeof (struct TreeNode));
    a->element = 'a';
    b->element = 'b';
    c->element = 'c';
    d->element = 'd';
    e->element = 'e';

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = NULL;
    c->right = NULL;
    d->left = NULL;
    d->right = NULL;
    e->left = NULL;
    e->right = NULL;

//    printf("%c",a->left->right->element);

    preByStack(a);
    return 0;
}