//
// Created by 34043 on 2023/7/22.
//
#include <stdio.h>
int main(){
    int i,f,a[10]={0};
    printf("�뿪ʼ����\n");
    scanf("%d",&f);
    while (f!=-1){
        if(f>=0&&f<=9)
            a[f]++;
        scanf("%d",&f);
    }
    printf("�������\n");
    for (i=0;i<10;i++){
        printf("%d����%d��\n",i,a[i]);
    }
    return 0;
}