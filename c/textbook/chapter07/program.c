//
// Created by 34043 on 2023/7/1.
//
#include <stdio.h>
#include <math.h>
    //���������
//double fun(double a,double b,double c){
//    double p,s;
//    if((a + b > c)||(a + c > b)||(b + c > a))
//    {
//        p = a + b + c;
//        s = sqrt(p * (p - a) * (p - b) * (p - c));
//        return s;
//    } else return -1;
//}
    //A-Fת��ʮ����
//int fun(char ch)
//{
//    int t;
//    if(ch=='A' || ch=='a')  t=10;
//    else
//    {
//        if(ch > 'a' && ch <'g')   t=10+(ch-'a');
//        else if(ch > 'A' && ch <'g') t=10+(ch-'A');
//    }
//    switch (ch) {
//        case 'A':
//        case 'a':   t=10;
//            break;
//        case 'B':
//        case 'b':   t=11;
//            break;
//        case 'C':
//        case 'c':   t=12;
//            break;
//        case 'D':
//        case 'd':   t=13;
//            break;
//        case 'E':
//        case 'e':   t=14;
//            break;
//        case 'F':
//        case 'f':   t=15;
//            break;
//    }
//    return t;
//}
    //n�Ľ׳�
//int fun(int n){
//    if(n==1) return 1;
//    return n * fun(n-1);
//}
    //����
int fun(int n){
    int k=1,i;
    for(i = 2; i < n; i++)
        if(n%i==0)
        {
            k=0;
            break;
        }
    if(k>0){
        return 1;
    } else{
        return 0;
    }
}
int main(){
    //������
//    double a,b,c;
//    scanf("%lf%lf%lf",&a,&b,&b);
//    printf("%lf", fun(a,b,c));
    //A-Fתʮ����
//    char ch;
//    scanf("%c",&ch);
//    printf("%d", fun(ch));
    //n�Ľ׳�
//    int n;
//    scanf("%d",&n);
//    printf("%d�Ľ׳�Ϊ%d",n, fun(n));
    //n�ǲ�������
    int n;
    scanf("%d",&n);
    printf("%d", fun(n));
    return 0;
}