//
// Created by 34043 on 2023/6/21.
//
#include <stdio.h>
void bmi(float w, float h){
    //�������
    float bmi;
    bmi = w / (h * h);
    if( bmi < 18){
        printf("������");
    } else if( bmi >= 18 && bmi < 25){
        printf("��������");
    } else if( bmi >= 25 && bmi < 27){
        printf("��������");
    } else if( bmi >= 27){
        printf("����");
    }
}
int main(){
    bmi(100.1,1.82);
    return 0;
}
