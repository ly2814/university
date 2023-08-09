//
// Created by 34043 on 2023/6/21.
//
#include <stdio.h>
void bmi(float w, float h){
    //身高体重
    float bmi;
    bmi = w / (h * h);
    if( bmi < 18){
        printf("低体重");
    } else if( bmi >= 18 && bmi < 25){
        printf("正常体重");
    } else if( bmi >= 25 && bmi < 27){
        printf("超重体重");
    } else if( bmi >= 27){
        printf("肥胖");
    }
}
int main(){
    bmi(100.1,1.82);
    return 0;
}
