#include <stdio.h>
#include <string.h>

//33
#define F(x,y) x*x+y

//36
//void fun(int x,int y,int *p,int *q)
//{
//	*p=x+y;
//	*q=x-y;
//}

//37
//int fun(){
//	static int a=1;
//	a=a*2;
//	return a;
//}

int main(){
	//读程序写结果
	//31
//	int x=-1,y=4,z;
//	z=(++x<0)&&!(y--<=0);
//	printf("%d,%d,%d\n",x,y,z);

	//32
//	int i,j,s=0;
//	for(i=1;i<=2;i++)
//		for(j=1,s=0;j<=2;j++)
//			s+=i*j;
//	printf("%d\n",s);

	//33(错误:提前计算)
//	int a=2,b=3,c;
//	c=F(a+1,b)%2;
//	printf("%d\n",c);

	//34
//	int x,y;
//	int *a[2]={&x,&y};
//	*a[0]=2;
//	*a[1]=3;
//	printf("%d,%d",x,y);

	//35
//	int a[3][3]={{1},{2,3},{4,5,6}};
//	int b,*p=a[1]+1;
//	b=p[1]+p[3];
//	printf("%d\n",b);

	//36
//	int a,b;
//	fun(10,7,&a,&b);
//	printf("%d,%d\n",a,b);

	//程序填空
	//37
//	int i,s=1;
//	for(i=1;i<=9;i++)	s+=fun();
//	printf("%d\n",s);

	//38
//	int n,sum=0;
//	scanf("%d",&n);
//	do{
//		sum=sum+(n%10)*(n%10);
//		n=n/10;
//	}while(n!=0);
//	printf("%d\n",sum);

	//编程题
	//39
//	int sum=0;
//	for(int i=1;i<100;i+=2)
//		sum+=i*(i+1);
//	printf("sum=%d",sum);

	//40(错误:闰年判断条件写错)
//	int year,month,leap=0;
//	scanf("%d%d",&year,&month);
//	if(year%4==0&&year%100!=0||year%400==0)	leap=1;
//	int day[]={31,28,31,30,31,30,31,31,30,31,30,31};
//	if(leap)	day[1]+=1;
//	printf("%d年%d月有%d天",year,month,(day[month-1]));

	return 0;
}