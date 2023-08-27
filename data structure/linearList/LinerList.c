//
// Created by 34043 on 2023/7/28.
//

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef int E;
typedef struct List * ArrayList;

struct List{
    //数组
    E * array;
    //数组长度
    int capacity;
    //list长度
    int size;
};

int initList(ArrayList list){
    //申请内存空间
    list->array = malloc(sizeof (E) * list->capacity);
    //无法申请返回0,同时结构体内部属性不会发生改变
    if(list->array == NULL) return 0;
    list->capacity = 10;
    list->size = 0;
    return 1;
}

_Bool insertList(ArrayList list, E element, int index){
    //时间复杂度O(n)
    if(index < 1 || index > list->size + 1) return 0;

    if(list->size == list->capacity){
        int newCapacity = list->capacity + (list->capacity >> 1);
        //数组扩容
        E * newArray = realloc(list->array,newCapacity * sizeof(E));
        if(newArray == NULL)    return 0;
        list->array = newArray;
        list->capacity = newCapacity;
    }

    for (int i = list->size; i > index - 1; i--)
        list->array[i] = list->array[i-1];
    //数组下标从0开始
    list->array[index - 1] = element;
    list->size++;
    return 1;
}

_Bool deleteList(ArrayList list, int index){
    //删除时间复杂度O(n)
    if(index < 1 || index > list->size) return 0;
    for (int i = index - 1; i < list->size -1; i++) {
        list->array[i] = list->array[i+1];
    }
    list->size--;
    return 1;
}

void printList(ArrayList list){
    for (int i = 0; i < list->size; ++i)
        printf("%d ",list->array[i]);
    printf("\n");
}

int sizeList(ArrayList list){
    return list->size;
}

E * getElement(ArrayList list, int index){
    //时间复杂度O(1)
    if(index < 1 || index > list->size) return NULL;
    return &(list->array[index-1]);
}

int getIndex(ArrayList list, E target){
    for (int i = 0; i < list->size; ++i) {
        if(list->array[i]==target) return i+1;
    }
    return -1;
}

void push(ArrayList list, E element){
    int size = list->size;
    insertList(list,element,size+1);
}


void unionList(ArrayList list1, ArrayList list2, ArrayList list3){
    //ArrayList是结构体List指针的自定义类型
    int i = 0, j = 0, k = 0;
    while (i < list1->size && j < list2->size)
        if(list1->array[i] <= list2->array[j])
            push(list3,list1->array[i++]);
        else
            push(list3,list1->array[i++]);
    while (i < list1->size)
        push(list3,list1->array[i++]);
    while (j < list2->size)
        push(list3,list2->array[j++]);
}

int main() {
    printf("list1:");
    struct List list1;
    initList(&list1);
    push(&list1,3);
    push(&list1,5);
    push(&list1,8);
    printList(&list1);

    printf("list2:");
    struct List list2;
    initList(&list2);
    push(&list2,11);
    push(&list2,13);
    push(&list2,15);
    printList(&list2);

    printf("list3:");
    struct List list3;
    unionList(&list1,&list2,&list3);
    printList(&list3);

    return 0;
}
