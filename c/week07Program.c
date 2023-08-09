//
// Created by 34043 on 2023/8/6.
//

#include <stdio.h>
int main(){
    int a[3][3] = {{1,6,13},{5,12},{7,3,9}};
    int i,j;
    for (i=0; i < 3; i++){
        for (j = 0; j < 3 && a[i][j]%2; j++)
        printf("%d\t", a[i][j]);
    }
    return 0;
}