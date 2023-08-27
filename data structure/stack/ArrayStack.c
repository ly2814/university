//
// Created by 34043 on 2023/8/17.
// ������ʵ��ջ
//
#include <stdio.h>
#include <stdlib.h>

typedef int E;
typedef struct Stack * ArrayStack;

struct Stack{
    //���ջ��Ԫ�ص�����
    E * array;
    //ջ������
    int capacity;
    //��ǰջ��Ԫ���±�
    int top;
};

//��ʼ��
_Bool init(ArrayStack stack){
    //����ռ�
    stack->array = malloc(sizeof (E) * 10);
    //�ж��ڴ�ռ��Ƿ񿪱ٳɹ�
    if (stack->array == NULL)   return  0;
    //��ʼ��ջ������
    stack->capacity = 10;
    //��ʼ��ʱջ����Ԫ��,��ջ��Ԫ���±�Ϊ-1
    stack->top = -1;
    return 1;
}

//��ջ
_Bool pushStack(ArrayStack stack, E element){
    //�ж�ջ�Ƿ�����
    if(stack->top + 1 == stack->capacity){
        //����������
        int newCapacity = stack->capacity + (stack->capacity >> 1);
        //Ϊ����������ڴ�ռ�
        E newArray = realloc(stack->array, newCapacity * sizeof (E));
        //����Ƿ����ɹ�
        if (stack->array == NULL)   return 0;
        //�޸�ջԪ�ؿռ�ָ��
        stack->array = newArray;
        //����ջ����
        stack->capacity = newCapacity;
    }
    //��ջ
    stack->array[stack->top + 1] = element;
    //ջ��λ�ø���
    stack->top++;
    return 1;
}

//��ӡջ��Ԫ��
void printStack(ArrayStack stack){
    for (int i = 0; i < stack->top + 1; ++i) {
        printf("%d ", stack->array[i]);
    }
    printf("\n");
}

//�ж��Ƿ�Ϊ��ջ
_Bool isEmpty(ArrayStack stack){
    return stack->top == -1;
}

//��ջ
E popStack(ArrayStack stack){
    //�п�,��ջ�޷���ջ
    if (isEmpty(stack)) return 0;
    //��ջ���Լ�
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
