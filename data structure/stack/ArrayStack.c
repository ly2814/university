//
// Created by 34043 on 2023/8/17.
// 用数组实现栈
//
#include <stdio.h>
#include <stdlib.h>

typedef int E;
typedef struct Stack * ArrayStack;

struct Stack{
    //存放栈内元素的数组
    E * array;
    //栈的容量
    int capacity;
    //当前栈顶元素下标
    int top;
};

//初始化
_Bool init(ArrayStack stack){
    //分配空间
    stack->array = malloc(sizeof (E) * 10);
    //判断内存空间是否开辟成功
    if (stack->array == NULL)   return  0;
    //初始化栈的容量
    stack->capacity = 10;
    //初始化时栈内无元素,故栈顶元素下标为-1
    stack->top = -1;
    return 1;
}

//入栈
_Bool pushStack(ArrayStack stack, E element){
    //判断栈是否已满
    if(stack->top + 1 == stack->capacity){
        //计算新容量
        int newCapacity = stack->capacity + (stack->capacity >> 1);
        //为新数组分配内存空间
        E newArray = realloc(stack->array, newCapacity * sizeof (E));
        //检查是否分配成功
        if (stack->array == NULL)   return 0;
        //修改栈元素空间指向
        stack->array = newArray;
        //更新栈容量
        stack->capacity = newCapacity;
    }
    //入栈
    stack->array[stack->top + 1] = element;
    //栈顶位置更新
    stack->top++;
    return 1;
}

//打印栈内元素
void printStack(ArrayStack stack){
    for (int i = 0; i < stack->top + 1; ++i) {
        printf("%d ", stack->array[i]);
    }
    printf("\n");
}

//判断是否为空栈
_Bool isEmpty(ArrayStack stack){
    return stack->top == -1;
}

//出栈
E popStack(ArrayStack stack){
    //判空,空栈无法出栈
    if (isEmpty(stack)) return 0;
    //出栈后自减
    return stack->array[stack->top--];
}

int main(){
    struct Stack stack;
    init(&stack);
    for (int i = 0; i < 10; ++i) {
        pushStack(&stack, i * 100);
    }
    printStack(&stack);
    while (!isEmpty(&stack)){
        printf("%d ", popStack(&stack));
    }
    return 0;
}
