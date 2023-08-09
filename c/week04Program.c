//
// Created by 34043 on 2023/7/10.
//
#include <stdio.h>
int main(){
    int i,sum = 0;
    int a[5]={13,22,9,15,22};
    for (i=0;i<5&&a[i]%3;i++){
        sum += a[i];
    }
    printf("sum=%d",sum);
    return 0;
}