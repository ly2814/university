//
// Created by 34043 on 2023/7/6.
//
#include <stdio.h>
#include <string.h>
//统计字符类型
//void fun(char s[]){
//    int a=0,b=0,c=0,i;
//    for (i=0; s[i] != '\0';i++)
//    {
//        if(s[i]>='0'&&s[i]<='9')
//            a++;
//        else if(s[i]>='a' && s[i]<='z')
//            b++;
//        else if(s[i]>='A' && s[i]<='Z')
//            c++;
//    }
//    printf("数字字符%d个,小写字母%d个,大写字母%d个",a,b,c);
//}
void main(){
    //判断字符串是否为回文字符串
    char s[30] = "abcabc", t[30]={'\0'};
    int len = strlen(s);
    char *p = s+len-1, *q = s, *n = t;
    while (p>=q){
        *n = *p;
        p--;
        n++;
    }
    if(strcmp(s,t)==0) printf("是回文字符串");
    else printf("不是回文字符串");
    //删除字符串最后一个字符
//    char s[30], new[30]={'\0'};
//    printf("请输入字符串");
//    gets(s);
//    int len = strlen(s);
//    char *n=new, *p=s, *q=s+len-1;
//    while (p<q){
//        *n = *p;
//        n++;
//        p++;
//    }
//    printf("%s",new);
    //验证密码
//    int count = 0;
//    char *right = "password";
//    while (1){
//        if(count >= 3) break;
//        printf("请输入密码\n");
//        char user[30];
//        gets(user);
//        if(strcmp(user,right) == 0){
//            printf("密码正确");
//            break;
//        } else{
//            count++;
//        }
//    }

}