//
// Created by 34043 on 2023/6/23.
//
#include "stdio.h"
int main(){
    /*
     * �����������ɹ��
     * ��1�� ��2�� ��3�����
     * ��4�� ��5�� ɹ��
     */
    printf("����������ǵڼ���\n");
    int day;
    scanf("%d", &day);
    if(day > 0){
        if(day % 5 <= 3 && day % 5 != 0){
            printf("����Ҫ������");
        } else{
            printf("����Ҫɹ����");
        }
    } else{
        printf("�������");
    }
    return 0;
}