//
// Created by 34043 on 2023/6/27.
//
#include <stdio.h>
int main(){
    //1!+2!+3!+4!+5!
    /*
     * int i,j,single,sum = 0;
     * for(i = 1; i <= 5; i++){
     *      single = 1;
     *      for (j = 1; j <= i; j++) {
     *          single *= j;
     *       }
     *      sum += single;
     *      }
     * printf("%d",sum);
     */
    //7+77+777+7777+77777
//    int sum = 7,a,b = 7;
//    for (int i = 1; i <= 4; ++i) {
//        a = 7;
//        for (int j = 1; j <= i; j++) {
//            a *= 10;
//        }
//        b += a;
//        sum += b;
//    }
//    printf("%d",sum);
    //1+12+123+1234+12345
//    int sum = 0,single = 0;
//    for (int i = 1; i <= 5; i++) {
//        single = single * 10 + i;
//        sum  += single;
//    }
//    printf("%d",sum);
    //��������n�Ǽ�λ��
//    int n,count = 0;
//    printf("������һ��������");
//    scanf("%d",n);
//    while (n != 0){
//        n = n / 10;
//        count++;
//    }
//    printf("%d",count);
    //x^y
//    printf("������x,��x��ָ��y\n");
//    int x, y, sum, a;
//    scanf("%d%d",&x,&y);
//    sum = x;
//    for (int i = 1; i < y; ++i) {
//        a = x;
//        sum *= a;
//    }
//    printf("%d",sum);
    //������
    //�žų˷���
//    for (int i = 1; i < 10; i++) {
//        for (int j = 1; j <= i; j++) {
//            printf("%d*%d=%d\t",i,j,(i*j));
//        }
//        printf("\n");
//    }
    //1*2+2*3+3*4+...+n*(n+1)
//    int a = 5,sum = 0;
//    for (int i = 0; i < a; i++) {
//        sum += i * (i + 1);
//    }
//    printf("%d",sum);
    //����
//    int sum;
//    for (int i = 3; i < 10001; i++) {
//        sum = 1;
//        for (int j = 2; j < i; j++) {
//            if(i % j == 0)  sum+= j;
//        }
//        if(sum == i){
//            printf("%d\n",i);
//        }
//    }
    //����
//    int k;
//    for (int i = 2; i < 101; ++i) {
//        k = 1;
//        for (int j = 2; j < i; ++j) {
//            if(i%j==0)  {
//                k = 0;
//                break;
//            }
//        }
//        if(k) printf("%d\n",i);
//    }
    //ͳ��Ӣ����ĸe �ո�s ����n �����ַ��ĸ���x
//    int e=0,s=0,n=0,x=0;
//    char ch;
//    printf("�������ַ���,�س�����\n");
//    while ( ch != '\n'){
//        scanf("%c",&ch);
//        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))    e++;
//        else if(ch == ' ') s++;
//        else if((ch >= '0' && ch <= '9'))    n++;
//        else x++;
//    }
//    printf("Ӣ����ĸ%d��,�ո�%d��,����%d��,�����ַ�%d��",e,s,n,(x-1));
    //����10����,����ƽ��ֵ,�������2λС��
//    int a = 12321;
//    double sum = 0.0;
//    for (int i = 1; i < 11; ++i) {
//        double temp;
//        printf("�������%d������\n",i);
//        scanf("%lf",&temp);
//        sum += temp;
//    }
//    printf("ƽ����Ϊ%.2lf",sum/10);
    int a = 1,b=10;
    do{
        b-=a;
        a++;
    } while (b--<0);
    printf("a=%d,b=%d",a,b);
    return 0;
}