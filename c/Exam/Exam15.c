#include <stdio.h>
#include <string.h>
#define S(X) (X*X)
#undef S

//33
//void func(int *a, int b[])
//{
//	b[0]+=*a;
//	*a=b[0]+6;
//}

//34
//int fun(int n)
//{
//	if(n>0)	return fun(n-2)*2;
//	else return 1;
//}

//36
//int fun(int n)
//{
//	static int a=2,b=3;
//	a+=(b++)*n;
//	return a;
//}

int main()
{
	//31
//	int a=1,b=1;
//	switch(a)
//	{
//		case 1:
//			switch(b)
//			{
//				case 0: printf("**0**\t");break;
//				case 1: printf("**1**\n");break;
//			}
//		case 2:printf("**2**");
//	}
	
	//32
//	int a[10]={6,5,4,3,2,1},i,j;
//	for(i=0;++i<4;)
//	{
//		j=a[i];a[i]=a[i+1];a[i+1]=j;
//	}
//	for(i=0;i<6;i++)
//		printf("%d ",a[i]);
	
	//33
//	int a=6,b[5]={3};
//	func(&a,b);
//	printf("%d,%d\n",b[0],a);
	
	//34
//	printf("%d\n",fun(9));
	
	//35(错误:没有看括号)
//	int a=2,n=3,m=1;
//	a*=S(n+m)/S(n-m);
//	printf("%d\n",a);
	
	//36
//	int i;
//	for(i=1;i<=2;i++)
//		printf("%d\n",fun(i));
	
	//程序填空
	//37
//	char s[50];
//	int i;
//	scanf("%s",s);
//	for(i=0;s[i]!='\0';i++)
//	{
//		if(s[i]>='a'&&s[i]<='z')
//		{
//			s[i]-=32;
//			continue;
//		}
//		if(s[i]>='A'&&s[i]<='Z')	s[i]+=32;
//	}
//	puts(s);
	
	//38
//	int i,sum=0,k=1;
//	for(i=1;i<=100;i++)
//	{
//		sum+=i*k;
//		k=-k;
//	}
//	printf("%d\n",sum);
	
	//编程题
	//39
//	int a,b,c;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a==b&&b!=c)	printf("%d",c);
//	else if(b==c&&a!=b)	printf("%d",a);
//	else if(a==c&&a!=b)	printf("%d",b);
	
	//40
//	int a[M],i,j;
//	for(i=0;i<M;i++)
//		scanf("%d",&a[i]);
//	for(i=0;i<M-1;i++)
//		for(j=0;j<M-1-i;j++)
//			if(a[j]<a[j+1])
//			{
//				int t=a[j];
//				a[j]=a[j+1];
//				a[j+1]=t;
//			}
//	printf("%d\t%d",a[0],a[1]);
	return 0;
}