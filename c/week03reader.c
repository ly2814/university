//
// Created by 34043 on 2023/6/23.
//
#include "stdio.h"
int main(){
    /*
     * 错误
     * 错误原因:x=y+z x=1+(-1) x=0 false
     * 输出结果为###
        int x = 0, y=1, z=-1;
        if(x<y)
            // x=y+z x=1+(-1) x=0 false
            if(x=y+z)   printf("***");
            else printf("###");
        else printf("*#");
        return 0;
     */
    /*
     * 正确
     * 输出结果为143
     *  int a;
     *  for (a = 2; a < 5; a++) {
     *      printf("%d", a%2?a+1:a-1);
     *  }
     *  return 0;
     */
    /*
     * 正确
     * 输出结果:
     * 9
     * 5
     * 2
        int x;
        for (x = 11; x > 0; x--) {
            if(x%3) x--;x--;
            printf("%d\n",x--);
        }
        return 0;
     */
    int i = 1,sum = 0,k =0;
    while (i<=200){
        //if表达式空1 条件是且,也就是&&,我写的是或
        if(i % 3 == 0 && i % 8 == 0){
            sum += i;
            //空2
            k++;
        }
        //空3循环迭代,我最开始没有想到
        i++;
    }
    printf("个数: %d\n和: %d",k,sum);
    return 0;
}