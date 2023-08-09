//
// Created by 34043 on 2023/7/15.
//
#include <stdio.h>
int main(){
    int i=0,m,n,t;
    int a[10]={1,2,3,4,5,6,7,8,9,11};
    m=n=0;
    for (i=0;i<10;i++)
    {
        if(a[i]>a[m])
            m=i;
        if(a[i]<a[n])
            n=i;
    }
    t=a[m];
    a[m]=a[n];
    a[n]=t;
    for (i=0;i<10;i++){
        printf("%d,",a[i]);
    }
    return 0;
}