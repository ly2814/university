//
// Created by 34043 on 2023/7/8.
//
#include <stdio.h>
int main(){
    int i=1,j=1,s=0;
    //51
    while (i<102){
        s+=i*j;
        i=i+2;
        j=-j;
    }
    printf("s=%d\n",s);
    return 0;
}