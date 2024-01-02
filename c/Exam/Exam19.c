#include <stdio.h>
#include <string.h>
//31
#define F(x) x*3+5
#define G(x) x*5+3
#undef F
#undef G
//32
//void fun(int a)
//{
//	int i;
//	if(a>0)
//	{
//		printf("%d",a);
//		fun(a-1);
//	}
//}

//33
//int x=2;
//void fun(int *p)
//{
//	x=(*p)++;
//}

//34
//void fun(int a[])
//{
//	if(*a%2)	*a+=1;
//	else *(a+1)+=*a;
//}

//36
//int fun(int a)
//{
//	static int n=0;
//	if(a%3==0)	n+=a;
//	else n+=a/2;
//	return n;
//}

//37
//void fun(char *s)
//{
//	int x,y;
//	y=strlen(s)-1;
//	char c;
//	for(x=0;x<y;x++,y--)
//	{
//		c=s[x];s[x]=s[y];s[y]=c;
//	}
//}

//39
#define PI 3.14
#undef PI
int main()
{
	//读程序写结果
	//31
//	int a=5,b=3;
//	printf("%d\n",a>b?F(a+b):G(a-b));

	//32
//	fun(3);
	
	//33
//	int a=5;
//	fun(&a);
//	printf("a=%d,x=%d\n",a,x);
	
	//34
//	int a[3]={1,2,3},i;
//	fun(a);fun(a);
//	for(i=0;i<3;i++)
//		printf("%2d",a[i]);
	
	//35
//	char s[]="95173";
//	int sum=0,i,k;
//	k=strlen(s)-1;
//	for(i=k;i>=0;i--)
//		sum=sum*10+s[i]-48;
//	printf("%d",sum);
	
	//36
//	int a[3]={8,9,3},i;
//	for(i=0;i<3;i++)
//		printf("%d\t",fun(a[i]));
	
	//程序填空
	//37
//	char a[5]="abd";
//	fun(a);
//	puts(a);
		
	//38
//	int a,b;
//	char c;
//	scanf("%d%c%d",&a,&c,&b);
//	switch(c)
//	{
//		case '+':printf("%d%c%d=%d\n",a,c,b,a+b);break;
//		case '-':printf("%d%c%d=%d\n",a,c,b,a-b);break;
//		case '*':printf("%d%c%d=%d\n",a,c,b,a*b);break;
//		case '/':printf("%d%c%d=%0.2f\n",a,c,b,a*1.0/b);break;
//		default:printf("输入错误");
//	}
	
	//编程题
	//39(错误:宏定义多写了一个等号)
//	float r,h,v;
//	printf("请输入底圆半径:");
//	scanf("%f",&r);
//	printf("\n请输入高度:");
//	scanf("%f",&h);
//	printf("\n");
//	v=r*r*h*PI;
//	printf("体积:%0.2f\n",v);
	
	//40
//	int t1,t2,t3,count=0;
//	for(t1=0;t1<=45;t1++)
//		for(t2=0;t2<=45;t2++)
//			for(t3=0;t3<=45;t3++)
//				if((t1*3+t2*2+t3/2==45)&&(t1+t2+t3==45))	count++;
//	printf("%d个搬法",count);
	return 0;
}