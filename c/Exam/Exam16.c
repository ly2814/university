#include <stdio.h>
#include <string.h>

//31
#define N 4
#define f(x,y) x*y-N

//34
//void fun(int n)
//{
//	printf("%d",n);
//	if(n>0)	fun(n/2);
//}

//35
//void fun(char ss[])
//{
//	ss[0]=ss[3];
//}

//36(错误:+n当成+i算的)
//int a[3]={1,2,3};
//void fun(int n)
//{
//	static int i=0;
//	a[i]*=a[i+1]+n;
//	i++;
//}

//37
//int fun(int a,int b,int c)
//{
//	if(a>b&&a>c)
//		return b>c?b:c;
//	else if(b>a&&b>c)
//		return a>c?a:c;
//	else
//	{
//		if(a>b)	return a;
//		else return b;
//	}
//}

int main()
{
	//读程序写结果
	//31(错误:计算错误)
	int a=3,b=2;
	printf("%d",f(a,b)*f(b,a));
	
	//32
//	int x=1,y=2,z;
//	if(x=2)
//		if(y==2)
//			if(x==1) z=5;
//			else z=5-1;
//		else z=5-2;
//	else z=5-3;
//	printf("%d\n",z);
	
	//33
//	int a[]={0,2,3,5,6};
//	int i=0,sum=0;
//	while(i<5&&!(a[i]%2))
//		sum+=a[i++];
//	printf("%d\n",sum);
	
	//34
//	fun(6);
	
	//35
//	char s[]="123456",i;
//	for(i=1;i<strlen(s)/2;i++)	fun(s+i);
//	printf("%s",s);
	
	//36
//	fun(1);
//	printf("%d\t",a[0]);
//	fun(2);
//	printf("%d\t",a[1]);
	
	//程序填空
	//37
//	printf("%d",fun(2,3,1));
	
	//38(错误:以为是按位数)
//	int n,sum=0,k=0;
//	scanf("%d",&n);
//	if(n<0)
//	{
//		n=-n;
//		k=1;
//	}
//	printf("输入结束");
//	while(n>0)
//	{
//		sum+=n%10;
//		n/=10;
//		k++;
//	}
//	printf("和为: %d\n所占宽度为: %d",sum,k);
	
	//编程题
	//39
//	float power,price=0;
//	scanf("%f",&power);
//	if(power>0&&power<=50)	price=power*0.45;
//	else if(power>50)	price=50*0.45+(0.45+0.07)*(power-50);
//	if(price==0) printf("输入错误");
//	else printf("本月电费:%f元",price);
	
	//40
//	int day=5,n;
//	scanf("%d",&n);
//	day=(day+n)%7;
//	if(day!=0)	printf("星期%d",day);
//	else printf("星期日");
//	printf("\n");
	return 0;
}
