#include <stdio.h>
#include <string.h>
//31
#define A(x) x+(x*x)
#undef A

//34
//int fun(char p[])
//{
//	static int k=0;
//	k+=strlen(p);
//	return k;
//}

//35
//void abc(int x)
//{
//	if(x==0)	return;
//	switch(x)
//	{
//		case 1:putchar('a');
//		case 2:putchar('b');
//		case 3:putchar('c');
//	}
//	abc(x-1);
//}

//36
//int fun(int a[],int n)
//{
//	int i,sum1,sum2;
//	sum1=sum2=0;
//	for(i=0;i<n;i++)
//	{
//		if(a[i]%2)	sum1++;
//		else sum2++;
//	}
//	return sum1>sum2?sum1:sum2;
//}

//38(错误:三元运算符第一个表达式写成return 1了)
//int fun(int n)
//{
//	return (n==1?1:n*fun(n-1));
//}

//40
//char fun(char s[])
//{
//	int i;
//	char c=s[0];
//	for(i=1;s[i]!='\0';i++)
//		if(s[i]>c)	c=s[i];
//	return c;
//}

int main()
{
	//31
//	int k=2;
//	printf("%d\n",A(k+k));
//	printf("%d\n",A(k*k));
	
	//32
//	char s1[20]="135";
//	char s2[20]="246";
//	if(strcmp(s1,s2)>0)
//		printf("%s",strcat(s1,s2));
//	else
//		printf("%s",strcat(s2,s1));
	
	//33
//	int sum=0,i;
//	char s[]="1230";
//	for(i=0;s[i];i++)
//		sum+=s[i]%10;
//	printf("sum=%d\n",sum);
	
	//34
//	char a[]="China";
//	char b[]="Tianjin";
//	int n=fun(a)+fun(b);
//	printf("%d\n",n);
	
	//35
//	abc(3);
	
	//36
//	int a[7]={1,8,9,3,7,4,2},x;
//	x=fun(a,7);
//	printf("%d\n",x);
	
	//37
//	int i=0,j=0,x;
//	scanf("%d",&x);
//	while(x!=0)
//	{
//		if(x>0)	i++;
//		else j++;
//		scanf("%d",&x);
//	}
//	printf("大于0的个数为:%d个\n小于0的个数为:%d个\n",i,j);
	
	//38
//	printf("%d",fun(3));
	
	//编程题
	//39(错误:条件画蛇添足,最开始写的是大于0)
//	float pre,after,m;
	/* pre税前 after税后
			m 税率*/
//	scanf("%f",&pre);
//	if(pre<=1600)	m=0;
//	else if(pre>1600&&pre<=2500)	m=0.05;
//	else if(pre>2500&&pre<=3500)	m=0.1;
//	else if(pre>3500&&pre<=4500)	m=0.15;
//	else if(pre>4500)	m=0.2;
//	after=m*(pre-1600);
//	if(after>=0)	printf("%f",after);
//	else printf("ERROR");
	
	//40
//	printf("%c",fun("Zz"));
	return 0;
}