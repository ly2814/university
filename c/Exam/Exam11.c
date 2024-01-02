#include <stdio.h>
#include <string.h>
//33
//struct data{
//	int a,b;
//};
//void fun(struct data k)
//{
//	k.a=1;
//	k.b=2;
//}

//35
//void fun(char *s,int n,int m)
//{
//	char ch;
//	while(n<m)
//	{
//		ch=s[n];s[n]=s[m];s[m]=ch;
//		n++;
//		m--;
//	}
//}

//36
//void fun()
//{
//	static int a=2;
//	printf("a=%d\n",a++);
//}

//37
//void fun(int a,int b,int *result)
//{
//	*result=a*b;
//}

//38(错误:变量名写错,z应该是z乘x不是z乘z)
//double Pow(double x,int y)
//{
//	double z=1.0;
//	int i;
//	for(i=1;i<=y;i++)
//		z=z*x;
//	return z;
//}

//40
//void dele_str(char s[])
//{
//	int i;
//	for(i=0;s[i];i++)
//		s[i]=s[i+1];
//}
int main()
{
	//读程序写结果
	//31
//	int x=14;
//	while(x>10&&x<50)
//	{
//		x++;
//		if(x/3)	{x++;break;}
//		else 	continue;
//	}
//	printf("%d\n",x);
	
	//32
//	int x,y;
//	x=y=0;
//	while(x<15){
//		y++;
//		x+=++y;
//	}
//	printf("%d,%d\n",x,y);
	
	//33
//	struct data dd={5,6};
//	fun(dd);
//	printf("%d,%d\n",dd.a,dd.b);
	
	//34
//	char s[20]="I*love*you*",ch;
//	int i,n=0,k=0;
//	for(i=0;(ch=s[i])!='\0';i++)
//	{
//		if(ch=='*')	k=0;
//		else if(k==0)	{k=1;n++;}
//	}
//	printf("%d\n",n);
	
	//35
//	char a[]="ABCDEFG";
//	fun(a,0,2);
//	fun(a,4,6);
//	printf("%s\n",a);
	
	//36
//	fun();fun();
	
	//程序填空
	//37
//	int x=2,y=3,z;
//	fun(x,y,&z);
//	printf("%d\n",z);
	
	//38
//	double x;
//	x=Pow(2.0,3);
//	printf("%lf",x);
	
	//编程题
	//39(错误:i应该是实型,错误)
//	int i;
//	float s=0;
//	for(i=1;i<=9;i++)
//		s+=i*1.0/(i+1);
//	printf("sum=%f",s);
	
	//40
//	char s[20]="ab";
//	dele_str(s);
//	puts(s);
	return 0;
}