//
// Created by 34043 on 2023/6/23.
//
#include "stdio.h"
int main(){
    /*
     * ����
     * ����ԭ��:x=y+z x=1+(-1) x=0 false
     * ������Ϊ###
        int x = 0, y=1, z=-1;
        if(x<y)
            // x=y+z x=1+(-1) x=0 false
            if(x=y+z)   printf("***");
            else printf("###");
        else printf("*#");
        return 0;
     */
    /*
     * ��ȷ
     * ������Ϊ143
     *  int a;
     *  for (a = 2; a < 5; a++) {
     *      printf("%d", a%2?a+1:a-1);
     *  }
     *  return 0;
     */
    /*
     * ��ȷ
     * ������:
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
        //if���ʽ��1 ��������,Ҳ����&&,��д���ǻ�
        if(i % 3 == 0 && i % 8 == 0){
            sum += i;
            //��2
            k++;
        }
        //��3ѭ������,���ʼû���뵽
        i++;
    }
    printf("����: %d\n��: %d",k,sum);
    return 0;
}