//
// Created by 34043 on 2023/8/25.
//

#include <stdio.h>
#include <stdlib.h>
typedef char E;

//树的数据结构
typedef struct TreeNode{
    E element;
    struct TreeNode * left;
    struct TreeNode * right;
    int flag;
} *  Node;

//将栈内元素类型设置为树的结点
typedef Node T;   //这里栈内元素类型定义为上面的Node，也就是二叉树结点指针

//栈的数据结构
struct StackNode {
    T element;
    struct StackNode * next;
};

//设置别名
typedef struct StackNode * SNode;  //这里就命名为SNode，不然跟上面冲突了就不好了

//初始化栈
void initStack(SNode head){
    head->next = NULL;
}

//入栈
_Bool pushStack(SNode head, T element){
    SNode node = malloc(sizeof(struct StackNode));
    if(node == NULL) return 0;
    node->next = head->next;
    node->element = element;
    head->next = node;
    return 1;
}

//栈是否为空
_Bool isEmpty(SNode head){
    return head->next == NULL;
}

//出栈
T popStack(SNode head){
    SNode top = head->next;
    head->next = head->next->next;
    T e = top->element;
    free(top);
    return e;
}
//栈顶
T peekStack(SNode head){
    return head->next->element;
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
        //遍历左子树
        while (root){
            //打印
            printf("%c",root->element);
            //入栈
            pushStack(&head, root);
            //左子树迭代
            root = root->left;
        }
        //出栈
        Node node = popStack(&head);
        //右子树结点回溯
        root = node->right;
    }
}

//中序遍历
void middle(Node root){
    if (root==NULL) return;
    //遍历左子树
    middle(root->left);
    //输出结点
    printf("%c ",root->element);
    //遍历右子树
    middle(root->right);
}

void middleByStack(Node root){
    struct StackNode stack;
    initStack(&stack);
    while (root || !isEmpty(&stack)){
        //先遍历左子树
        while (root){
            pushStack(&stack, root);
            //左子树结点迭代
            root = root->left;
        }
        //出栈
        Node node = popStack(&stack);
        //输出
        printf("%c ", node->element);
        //右子树结点回溯
        root = node->right;
    }
}

//后序遍历
void post(Node root){
    if (root == NULL)   return;
    //遍历左子树
    post(root->left);
    //遍历右子树
    post(root->right);
    //输出结点
    printf("%c ",root->element);
}

void postByStack(Node root){
    //定义栈
    struct StackNode stack;
    //初始化栈
    initStack(&stack);
    //开始遍历
    while (root || !isEmpty(&stack)){
        //遍历左子树
        while (root){
            //每个结点入栈
            pushStack(&stack,root);
            //设置该结点已经被左子树遍历
            root->flag = 0;
            //迭代
            root = root->left;
        }
        //左子树遍历完成,此时root为空,将栈顶元素指向root
        root = peekStack(&stack);
        //判断该节点是否参与左子树遍历,如果参与过开始右子树遍历
        if (root->flag == 0){
            //设置该结点已经被右子树遍历
            root->flag = 1;
            //迭代
            root = root->right;
        } else{ //该分支为左右子树都被遍历
            //输出元素
            printf("%c ",root->element);
            //出栈
            popStack(&stack);
            //根节点置空
            root = NULL;
        }
    }
}

int main(){
    Node a = malloc(sizeof (struct TreeNode));
    Node b = malloc(sizeof (struct TreeNode));
    Node c = malloc(sizeof (struct TreeNode));
    Node d = malloc(sizeof (struct TreeNode));
    Node e = malloc(sizeof (struct TreeNode));
    Node f = malloc(sizeof (struct TreeNode));
    a->element = 'a';
    b->element = 'b';
    c->element = 'c';
    d->element = 'd';
    e->element = 'e';
    f->element = 'f';

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = NULL;
    c->right = f;
    f->left = NULL;
    f->right = NULL;
    d->left = NULL;
    d->right = NULL;
    e->left = NULL;
    e->right = NULL;

//    printf("%c",a->left->right->element);
//    pre(a);
//    preByStack(a);
//    middle(a);
//    middleByStack(a);
//    post(a);
    postByStack(a);
    return 0;
}