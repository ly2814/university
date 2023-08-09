//
// Created by 34043 on 2023/7/22.
//
#include <stdio.h>
int main(){
    int i,f,a[10]={0};
    printf("请开始输入\n");
    scanf("%d",&f);
    while (f!=-1){
        if(f>=0&&f<=9)
            a[f]++;
        scanf("%d",&f);
    }
    printf("输入结束\n");
    for (i=0;i<10;i++){
        printf("%d出现%d次\n",i,a[i]);
    }
    return 0;
}