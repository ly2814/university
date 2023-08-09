//
// Created by 34043 on 2023/6/25.
//
#include <stdio.h>
#include <math.h>
int main(){
    //两数最大
    /*
     * int a,b;
     * printf("请输入两个数字\n");
     * scanf("%d%d",&a,&b);
     * if(a > b) printf("最大值为%d",a);
     * else printf("最大值为%d",b);
     */
    //三数最大
    /*
     * int a,b,c;
     * printf("请输入三个数字\n");
     * scanf("%d%d%d",&a,&b,&c);
     * if(a>b&&a>c) printf("最大值为%d",a);
     * else if(b>a&&b>c) printf("最大值为%d",b);
     * else if(c>a&&c>b) printf("最大值为%d",c);
     */
    //闰年
    /*
     * int year;
     * printf("请输入年份\n");
     * scanf("%d",&year);
     * if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
     *      printf("%d是闰年\n",year);
     * else
     *      printf("%d不是闰年\n",year);
     */
    //一元二次方程
    /* double a,b,c,delta,x,x0,x1;
     * printf("请输入abc的值\n");
     * scanf("%lf%lf%lf",&a,&b,&c);
     * delta = b * b - 4 * a * c;
     * if(delta > 0)
     * {
     *      x0 = (-b + sqrt(delta)) / (2 * a);
     *      x1 = (-b - sqrt(delta)) / (2 * a);
     *      printf("实数根1为%lf,实数根2为%lf",x0,x1);
     * } else if (delta == 0){
     *      x = (-b + sqrt(delta)) / (2 * a);
     *      printf("实数根为%lf",x);
     * } else{
     *      printf("实数根不存在");
     * }
     */
    //输入三条边边长,判断能否构成三角形,并输出三角形类型(等腰 等边 一般)
    /* double a,b,c;
     * printf("请输入abc的值\n");
     * scanf("%lf%lf%lf",&a,&b,&c);
     * if(a+b>c || a+c>b || b+c>a){
     *      if(a==b && b==c && a==c){
     *          printf("等边三角形");
     *      } else if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
     *          printf("等腰三角形");
     *      }else{
     *          printf("一般三角形");
     *      }
     * } else{
     *      printf("无法构成三角形");
     * }
     */
    //分段函数
    /* double x;
     * printf("请输入x\n");
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
    //数字星期转单词
//    int day;
//    printf("请输入今天是本周的第几天\n");
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
//            printf("输入不合法");
//    }
    int a = 3,b = 4,c;
    c=a++>3||--b<4;
    printf("%d",c);
    return 0;
}