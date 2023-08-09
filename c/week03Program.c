//
// Created by 34043 on 2023/6/23.
//
#include "stdio.h"
int main(){
    /*
     * 三天打鱼两天晒网
     * 第1天 第2天 第3天打鱼
     * 第4天 第5天 晒网
     */
    printf("请输入今天是第几天\n");
    int day;
    scanf("%d", &day);
    if(day > 0){
        if(day % 5 <= 3 && day % 5 != 0){
            printf("今天要打鱼了");
        } else{
            printf("今天要晒网了");
        }
    } else{
        printf("输入错误");
    }
    return 0;
}