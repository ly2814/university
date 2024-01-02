#include <stdio.h>
#include <string.h>
//34
//int f(int n)
//{
//	switch(n)
//	{
//		case 1:
//		case 2:return 1;
//	}
//	return (f(n-1)+f(n-2));
//}

//37
//int str_len(char s[])
//{
//	char *p=s;
//	while(*p)	p++;
//	return p-s;
//}

int main(){
	//选择题
	//10
//	int i,a[10];
//	for(i=9;i>=0;i--)	a[i]=10-i;
//	printf("%d%d%d",a[2],a[5],a[8]);

	//12(错误:自己脑补出来一个括号)
//	int a[]={1,2,3,4,5,6,7,8,9,0},*p;
//	p=a;
//	printf("%d\n",*p+9);

	//16
//	char str[]="ABCD", *p=str;
//	printf("%d\n",*(p+4));
	
	//20
//	printf("%d",fopen("D:\\t.txt","r"));

	//读程序写结果题
	//31
//	int x=0;
//	while(x++<=2)
//		printf("%d",x);
//	printf("%d\n",x);
	
	//32
//	int n=123,s=0,p=1;
//	while(n>0){
//		s+=(n%10)*p;
//		p=p*8;
//		n/=10;
//	}
//	printf("%d\n",s);
	
	//33
//	int x=35,y=50;
//	while(x!=y)
//	{
//		if(x>y)	x-=y;
//		if(y>x)	y-=x;
//	}
//	printf("%d\n",x);
	
	//34
//	printf("%d\n",f(5));
	
	//35
//	char s[]="abcde",*p=s;
//	int i=1;
//	while(*p)
//	{
//		if(i%2)	*p='*';
//		p++;i++;
//	}
//	printf("%s\n",s);
	
	//36
//	int a=-1,b=-1,c=-1;
//	a++||++b&&++c;
//	printf("%d,%d,%d\n",a,b,c);
//	a=b=c=-1;
//	++a&&++b||++c;
//	printf("%d,%d,%d\n",a,b,c);
	
	//程序填空题
	//37
//	char *s="abcd";
//	printf("%d",str_len(s));

	//38
//	int a,b,c,d;
//	scanf("%d%d%d",&a,&b,&c);
//	d=b*b-4*a*c;
//	if(d>0)	printf("该方程有两个根");
//	else if(d==0)	printf("该方程有一个根");
//	else printf("没有实数根");
	
	//编程题
	//39(错误:只判断了是直角三角形的情况,没判断不是直角三角形的情况)
//	float a,b,c,sa,sb,sc;
//	scanf("%f%f%f",&a,&b,&c);
//	if(a+b>c&&b+c>a&&a+c>b)
//	{
//		sa=a*a;
//		sb=b*b;
//		sc=c*c;
//		if(sa+sb==sc||sb+sc==sa||sa+sc==sb)
//			printf("该三角形是直角三角形\n");
//		else printf("该三角形不是直角三角形\n");
//	}else printf("三边无法构成三角形");
	
	//40(错误,写成j%i==0)
//	int i,j,k;
//	for(i=2;i<100;i++)
//	{
//		k=1;
//		for(j=2;j<i;j++)
//			if(i%j==0)
//			{
//				k=0;
//				break;
//			}
//		if(k)	printf("%d\t",i);
//	}
//	printf("\n");
	return 0;
}