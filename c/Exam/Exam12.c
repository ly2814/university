#include <stdio.h>
#include <string.h>
//33
//void fun(char *p,char q)
//{
//	char ch;
//	ch=*p;*p=q;q=ch;
//}

//38(错误:j的迭代错误)
//void fun(int x[],int n)
//{
//	int t,i,j,m;
//	m=n/2;
//	for(i=0;i<m;i++)
//	{
//		j=n-i-1;
//		t=x[i];x[i]=x[j];x[j]=t;
//	}
//}
int main(){
	//31
//	int x=20;
//	printf("%d",0<x<20);
//	printf("%d",0<x&&x<20);
	
	//32
//	int a=0,b=0,c=0;
//	c=(a+=a-=3),(a=b,b*3);
//	printf("%d,%d,%d\n",a,b,c);
	
	//33
//	char a[]="abc",b[]="efg";
//	fun(a,b[0]);
//	printf("%s,%s\n",a,b);
	
	//34
//	int a=18,b=21,t;
//	while(b!=0)
//	{
//		t=a%b;
//		a=b;
//		b=t;
//	}
//	printf("%d\n",a);
	
	//35
//	int i,j,s;
//	for(i=1;i<10;i++)
//		for(j=0;j<10;j++)
//		{
//			s=i*10+j;
//			if(s%3==0&&s%7==0)
//				printf("%d\t",s);
//		}
	
	//36
//	int a=1,b=2;
//	a=a^b;b=b^a;a=a^b;
//	printf("a=%d,b=%d",a,b);
	
	//程序填空
	//37
//	char s[100];
//	int i;
//	for(i=0;i<100;i++)
//	{
//		s[i]=getchar();
//		if(s[i]=='\n')	break;
//	}
//	s[i]='\0';
//	puts(s);
	
	//38
//	int a[4]={1,2,3,4},i;
//	fun(a,4);
//	for(i=0;i<4;i++)	printf("%2d",a[i]);
	//编程题
	//39
//	int a[3],i,j;
//	for(i=0;i<3;i++)
//		scanf("%d",&a[i]);
//	for(i=0;i<2;i++)
//		for(j=0;j<2-i;i++)
//			if(a[j]<a[j+1])
//			{
//				int t=a[j];
//				a[j]=a[j+1];
//				a[j+1]=t;
//			}
//	printf("max=%d",a[0]);
	//40(增长率算错了)
//	float sum=1000000;int year=2023;
//	while(sum<=2000000)
//	{
//		sum+=sum/1000*5;
//		year+=1;
//	}
//	printf("%d",year);
	return 0;
}