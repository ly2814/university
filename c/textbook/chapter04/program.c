//
// Created by 34043 on 2023/6/25.
//
#include <stdio.h>
#include <math.h>
int main(){
    //�������
    /*
     * int a,b;
     * printf("��������������\n");
     * scanf("%d%d",&a,&b);
     * if(a > b) printf("���ֵΪ%d",a);
     * else printf("���ֵΪ%d",b);
     */
    //�������
    /*
     * int a,b,c;
     * printf("��������������\n");
     * scanf("%d%d%d",&a,&b,&c);
     * if(a>b&&a>c) printf("���ֵΪ%d",a);
     * else if(b>a&&b>c) printf("���ֵΪ%d",b);
     * else if(c>a&&c>b) printf("���ֵΪ%d",c);
     */
    //����
    /*
     * int year;
     * printf("���������\n");
     * scanf("%d",&year);
     * if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
     *      printf("%d������\n",year);
     * else
     *      printf("%d��������\n",year);
     */
    //һԪ���η���
    /* double a,b,c,delta,x,x0,x1;
     * printf("������abc��ֵ\n");
     * scanf("%lf%lf%lf",&a,&b,&c);
     * delta = b * b - 4 * a * c;
     * if(delta > 0)
     * {
     *      x0 = (-b + sqrt(delta)) / (2 * a);
     *      x1 = (-b - sqrt(delta)) / (2 * a);
     *      printf("ʵ����1Ϊ%lf,ʵ����2Ϊ%lf",x0,x1);
     * } else if (delta == 0){
     *      x = (-b + sqrt(delta)) / (2 * a);
     *      printf("ʵ����Ϊ%lf",x);
     * } else{
     *      printf("ʵ����������");
     * }
     */
    //���������߱߳�,�ж��ܷ񹹳�������,���������������(���� �ȱ� һ��)
    /* double a,b,c;
     * printf("������abc��ֵ\n");
     * scanf("%lf%lf%lf",&a,&b,&c);
     * if(a+b>c || a+c>b || b+c>a){
     *      if(a==b && b==c && a==c){
     *          printf("�ȱ�������");
     *      } else if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
     *          printf("����������");
     *      }else{
     *          printf("һ��������");
     *      }
     * } else{
     *      printf("�޷�����������");
     * }
     */
    //�ֶκ���
    /* double x;
     * printf("������x\n");
     * if(x <= 0)
     *      printf("%lf", 7 * x + 10);
     * else if(x > 0 && x <= 10)
     *      printf("%lf", 3 * x * x * x);
     * else if(x > 10 && x <= 20)
     *      printf("%lf", -x);
     * else if(x > 20){
     *      printf("30");
     * }
     */
    //��������ת����
//    int day;
//    printf("����������Ǳ��ܵĵڼ���\n");
//    scanf("%d", &day);
//    switch (day) {
//        case 1:
//            printf("Monday");
//            break;
//        case 2:
//            printf("Tuesday");
//            break;
//        case 3:
//            printf("Wednesday");
//            break;
//        case 4:
//            printf("Thursday");
//            break;
//        case 5:
//            printf("Friday");
//            break;
//        case 6:
//            printf("Saturday");
//            break;
//        case 7:
//            printf("Sunday");
//            break;
//        default:
//            printf("���벻�Ϸ�");
//    }
    int a = 3,b = 4,c;
    c=a++>3||--b<4;
    printf("%d",c);
    return 0;
}