#include <stdio.h>
#include <string.h>
//32
//void fun(int c)
//{
//	int a=0;
//	static b=0;
//	a++;b++;
//	printf("%d: a=%d b=%d\n",c,a,b);
//}
int main(){
	//读程序写结果
	//31(错误:草稿上答案看对了,手写错了)
//	int x=5,y=6,z;
//	z=(x++==--y)?x:y;
//	printf("%d\n",z);
	
	//32
//	int i;
//	for(i=1;i<=3;i++)	fun(i);
	
	//33(答案写串了)
//	int a=1,b=5;
//	do{
//		b-=a;
//		a++;
//	}while(b--<0);
//	printf("a=%d,b=%d\n",a,b);
	
	//34
//	int x[6]={1,2,3,4,5},a[5],i;
//	for(i=0;i<5;i++)
//	{
//		a[i]=x[i]+x[i+1];
//		printf("%2d",a[i]);
//	}
	
	//35
//	int i,x[10]={1,3,1,2,0,2,3,2,0,3},n[4]={0};
//	for(i=0;i<10;i++)
//		n[x[i]]++;
//	for(i=0;i<4;i++)
//		printf("%d\t",n[i]);
	
	//36
//	char str[]="*****";
//	int i;
//	for(i=0;i<3;i++)
//	{
//		printf("%s\n",str);
//		str[i]=32;
//		str[strlen(str)-1]='\0';
//	}
	
	//程序填空
	//37(错误:变量名写错,判断规则写错,子集是小于等于,不仅仅是小于)
//	int B[5]={1,2,3,4,5};
//	int A[3]={1,2,3},i,j,k=0;
//	for(i=0;i<3;i++)
//		for(j=0;j<5;j++)
//			if(A[i]==B[j])	k++;
//	if(k<=5)	printf("A是B的子集\n");
//	else printf("A不是B的子集\n");

	//38
//	char s[]="abcacdefabdg";
//	int a[4]={0},i;
//	for(i=0;s[i]!='\0';i++)
//		switch(s[i])
//		{
//			case 'a':	a[0]++;break;
//			case 'b':	a[1]++;break;
//			case 'c':	a[2]++;break;
//			case 'd':	a[3]++;
//		}
//	for(i=0;i<4;i++)
//		printf("%d\n",a[i]);

	//编程题
	//30
//	int i;float k=1.0,sum=0;
//	for(i=1;i<=10;i++)
//		sum+=k/(i*k);
//	printf("%f",sum);

	//40
//	char s[50];
//	gets(s);
//	int i,n=0;
//	for(i=0;s[i]&&s[i+1];i++)
//		if(s[i]=='a'&&s[i+1]=='b')	n++;
//	printf("出现%d次",n);
	return 0;
}