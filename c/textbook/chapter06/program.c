//
// Created by 34043 on 2023/6/29.
//
#include<stdio.h>
int main(){
    //输入十个数字去掉最高分最低分求均值
//    int i, a[10];
//    float sum = 0,avg = 0,max,min;
//    for (i = 0; i < 10; i++) {
//        scanf("%d",&a[i]);
//        sum += a[i];
//    }
//    max = min = 0;
//    for (i = 0; i < 10; i++) {
//        if(max < a[i])  max = a[i];
//        if(min > a[i])  min = a[i];
//    }
//    sum = sum - max - min;
//    avg = sum / 10;
//    printf("%.2f",avg);
    //删除指定下标的元素
//    int a[]={0,1,2,3,4,5,6,7,8,9}, i, k;
//    scanf("%d",&k);
//    a[k] = 0;
//    for(i = 0; i < 10;i++){
//        printf("%d\t",a[i]);
//    }
    //输入十个正整数,输出个位数是奇数,十位数是偶数的所有数
//    int a[10],i,x,y,t;
//    for(i = 0; i < 10; i++){
//        scanf("%d",&a[i]);
//    }
//    for(i = 0; i < 10; i++){
//        x = y =0;
//        t = a[i];
//        x = t % 10;
//        if(t<10) y=0;
//        else
//        {
//            while (t > 10) {
//                t /= 10;
//            }
//        }
//        y = t;
//        if(x % 2 == 1 && y % 2 == 0) printf("%d ",a[i]);
//    }
    //按个位数从大到小排序后输出
//    int a[] = {23,12,42,43,65,34,53,25,96,43},i,j,t;
//    for(i = 0; i < 10; i++){
//        for (j = 0; j < 10 - i; j++)
//            if((a[j] % 10) > (a[j+1]%10))
//            {
//                t = a[j];
//                a[j] = a[j+1];
//                a[j+1] = t;
//            }
//    }
//    for (i = 0; i < 10; i++)
//        printf("%d\t",a[i]);
    //六位同学输入其五门课程的成绩
//    float s[6][5], sum, avg;
//    int i,j;
//    for (i = 0; i < 6; i++)
//    {
//        printf("请输入第%d名同学成绩\n",(i+1));
//        sum = avg =0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f",&s[i][j]);
//            sum += s[i][j];
//        }
//        avg = sum / j;
//        printf("第%d名同学平均分为%.2f\n",(i+1),avg);
//    }
    int a[10] = {1*1};
    return 0;
}