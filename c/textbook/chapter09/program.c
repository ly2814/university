//
// Created by 34043 on 2023/7/6.
//
#include <stdio.h>
#include <string.h>
//ͳ���ַ�����
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
//    printf("�����ַ�%d��,Сд��ĸ%d��,��д��ĸ%d��",a,b,c);
//}
void main(){
    //�ж��ַ����Ƿ�Ϊ�����ַ���
    char s[30] = "abcabc", t[30]={'\0'};
    int len = strlen(s);
    char *p = s+len-1, *q = s, *n = t;
    while (p>=q){
        *n = *p;
        p--;
        n++;
    }
    if(strcmp(s,t)==0) printf("�ǻ����ַ���");
    else printf("���ǻ����ַ���");
    //ɾ���ַ������һ���ַ�
//    char s[30], new[30]={'\0'};
//    printf("�������ַ���");
//    gets(s);
//    int len = strlen(s);
//    char *n=new, *p=s, *q=s+len-1;
//    while (p<q){
//        *n = *p;
//        n++;
//        p++;
//    }
//    printf("%s",new);
    //��֤����
//    int count = 0;
//    char *right = "password";
//    while (1){
//        if(count >= 3) break;
//        printf("����������\n");
//        char user[30];
//        gets(user);
//        if(strcmp(user,right) == 0){
//            printf("������ȷ");
//            break;
//        } else{
//            count++;
//        }
//    }

}