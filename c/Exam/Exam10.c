#include <stdio.h>
#include <string.h>
#include <math.h>

//31
#define F(a) a*a
#undef F

//32
//typedef struct st
//{
//	int x,y;
//}TT;

//33
//int *fun(int a[])
//{
//	int *p;
//	p=a+1;
//	return p;
//}

//35
//int fun(int x,int y)
//{
//	return (x+y);
//}

//36
void fun(int max,int a[],int n)
{
	int i;
	max=a[0];
	for(i=1;i<n;i++)
		if(a[i]>max)	max=a[i];
}
int main(){
	//读程序写结果
	//31(错误:把z当成2算了)
//	int x=1,y=2,z=3,s;
//	s=F(x+y)*z;
//	printf("%d\n",s);
	
	//32
//	TT s[2]={1,2,3,4};
//	int k;
//	k=s[1].x/s[0].y*s[1].y;
//	printf("%d\n",k);
	
	//33
//	int b[3]={1,2,3},*q;
//	q=fun(b);
//	printf("%d",*q);
	
	//34
//	float x=3.5,y;
//	if(x<0)	y=x+2;
//	else if(x>2&&x<5)	y=x-2;
//	else y=x/2;
//	printf("%0.3f\n",y);
	
	//35
//	int a=1,b=2,c=3,sum;
//	sum=fun((a++,b++,a+b),c++);
//	printf("%d\n",sum);
	
	//36
//	int a[10]={10,20,30,40,50,60,70,80,90,100};
//	int max=10;
//	fun(max,a,10);
//	printf("max=%d\n",max);
	
	//程序填空
	//37
//	int a=2,b=3;
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("a=%d,b=%d\n",a,b);
	
	//38
//	int i,sum=0;
//	for(i=1;i<=5;i++)
//		sum+=i+i-1;
//	printf("%d\n",sum);
	
	//编程题
	//39
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//			printf("%d",i);
//		printf("\n");
//	}
	
	//40(错误:当成大小写转换写了,z倒是处理的对,变成a,其实原来的功能是字母向后移动一位)
//	int i;
//	char s[50];
//	gets(s);
//	for(i=0;s[i]!='\0';i++)
//	{
//		if(s[i]>='a'&&s[i]<='y' || s[i]>='A'&&s[i]<='Y')	s[i]+=1;
//		else if(s[i]=='a'+25)	s[i]='a';
//		else if(s[i]=='A'+25)	s[i]='A';
//	}
//	puts(s);
	return 0;
}