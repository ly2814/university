#include <stdio.h>
#include <math.h>

//33
//int fun(int n)
//{
//	if(n==0||n==1)	return n;
//	else return n+fun(n-2);
//}

//34
//int fun(char *s)
//{
//	int i=0;
//	while(s[i]!='\0')
//	{
//		if(s[i]%2!=0)	return 0;
//		i++;
//	}
//	return i;
//}

//35
#define N 2+3
#define Q(a) a*a+N
#undef N
#undef Q

//36
//void fun(int a)
//{
//	static int b=0;
//	printf("%d\t",b+a+2);
//}
int main()
{
	//读程序写结果
	//31
//	int a[3][3]={{1,3},{5,2},{4,6}},i,j;
//	for(i=0;i<3;i++)
//		for(j=i;j<3;j+=2)
//			printf("%d",a[i][j]);
	
	//32
//	int a=5,b=2;
//	if(a=1)
//		if(b!=0)
//			if(a==1)
//				b+=a;
//	printf("%d,%d\n",a,b);
	
	//33
//	printf("%d",fun(5));
	
	//34
//	char s[20]="0246";
//	int k=fun(s);
//	printf("%d\n",k);
	
	//35
//	printf("%d\n",Q(1+2));
	
	//36
//	int i;
//	for(i=3;i>0;i--)	fun(i);
	
	//程序填空
	//37
//	int i,count;
//	count=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i/10==6)	count++;
//		if(i%10==6)	count++;
//	}
//	printf("6出现的次数为: %d",count);
	
	//38
//	int a[30]={1,1},i;
//	for(i=2;i<30;i++)
//		a[i]=a[i-1]+a[i-2];
//	for(i=0;i<30;i++)
//	{
//		printf("%d\t",a[i]);
//		if((i+1)%5==0)	printf("\n");
//	}
	
	//编程题
	//39
//	double x,y;
//	scanf("%lf",&x);
//	if(x>=0)	y=sqrt(x);
//	else y=2*x-1;
//	printf("y=%lf",y);
	
	//40
	int n,i,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(n%i==0)	count++;
	printf("因数有%d个",count);
	return 0;
}