#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 9

typedef struct Element{
    int key;
}   *   Element;

typedef struct HashTable{
    Element * table;
}   *   HashTable;

//��ʼ��
void init(HashTable hashTable){
    //����ռ�
    hashTable->table = malloc(sizeof (struct Element) * SIZE);
    ////��ʼ��(����)
//    for (int i = 0; i < SIZE; ++i) {
//        hashTable->table[i] = NULL;
//    }
    memset(hashTable->table, 0, sizeof (struct  Element) * SIZE);
}

//hash����
int hash(int key){
    return key % SIZE;
}

//����Ԫ��
void insert(HashTable hashTable, Element element){
    int hashCode = hash(element->key), count = 0;
    while (hashTable->table[hashCode]){
        hashCode = hash(element->key + ++count);
    }
    hashTable->table[hashCode] = element;
}

//����
_Bool search(HashTable hashTable, int key){
    int hashCode = hash(key), count = 0;
    const int startIndex = hashCode;
    if (hashTable->table[hashCode] == NULL) return 0;
    do {
        if (hashTable->table[hashCode]->key == key) return 1;
        hashCode = hash(key + ++count);
    } while (startIndex != hashCode && hashTable->table[hashCode]);
    return 0;
}

//����element
Element createElement(int key){
    Element element = malloc(sizeof (struct Element));
    element->key = key;
    return element;
}

int main(){
    //������ϣ��
    struct HashTable table;
    //��ʼ��
    init(&table);

    //�����ĸ�Ԫ��
    insert(&table,createElement(10));
    insert(&table,createElement(7));
    insert(&table,createElement(13));
    insert(&table,createElement(29));

    printf("");

    ////������ϣ��(���в�����)
//    for (int i = 0; i < SIZE; ++i) {
//        if (table.table[i]){
//            printf("%d ",table.table[i]->key);
//        } else{
//            printf("NULL ");
//        }
//    }

    for (int i = 0; i < 9; ++i) {
        insert(&table, createElement(i * 9));
    }

    //���ҹ�ϣ�����Ƿ���ڸ�Ԫ��
//    printf("%d\n",search(&table,1));
//    printf("%d\n",search(&table,13));

    return 0;
}