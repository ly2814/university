#include <stdio.h>
#include <string.h>
	//填空8
//	int a;
	//读程序3
//	int x=3;
//	void fun(int x){
//		x++;
//	}
	//读程序5
//	int fun(int array[], int n){
//		int i,sum = 0;
//		for(i=0;i<n;i++)
//		{
//			if(i<n/2)
//				sum=sum+array[i];
//			else
//				sum=sum-array[i];
//		}
//		return sum;
//	}
	//	编程2
//void fun(char s[])
//{
//	for(int i=0;s[i];i++)
//		if(s[i]>='A'&&s[i]<='Z')	s[i]+=32;
//		else if(s[i]>='a'&&s[i]<='z')	s[i]-=32;
//		else s[i]='#';
//}
int main(){
	//选择10
//	int a[];
	//选择15
//	int a=2,b=2,c=3;
//	a++>b&&c--;
//	printf("%d",c);
	//填空1
//	int i=2,j;
//	j=i++;
//	printf("%d",j);
	
	//填空2
//	int a=-2;
//	printf("%d",~a);

	//填空3
//	int a=3;
//	printf("%d",a+=a-=a*a);
	
	//填空8
//	printf("%d",a);

	//填空9(错误)
//	int a[2][3]={1,3,5,2,4,5};
//	printf("%d",*(a[1]+1));
	
	//填空10
//	printf("%.10lf",3.6E-6);
	
	//读程序1
//	int x=21;
//	printf("%d,%o,%x",x,x,x);
	
	//读程序2
//	int r;
//	char x,y,z;
//	x='6',y='3',z='/';
//	switch(z){
//		case '+':r=x+y;break;
//		case '-':r=x-y;break;
//		case '*':r=x*y;break;
//		case '/':r=x/y;break;
//	}
//	printf("%d\n",r);

	//读程序3
//	fun(x);
//	printf("%d\n",x);

	//读程序4(错误,少计算一次)
//	int x,y;
//	for(x=30,y=0;(x>=10,y<10);x--,y++)
//	{
//		x/=2;
//		y+=2;
//	}
//	printf("%d,%d\n",x,y);

	//读程序5
//	int a[8]={2,4,6,8,1,3,5,7},k;
//	k=fun(a,8);
//	printf("%d",k);

	//读程序6
//	char s[3][4];
//	int i;
//	for(i=0;i<3;i++)
//		strcpy(s[i],"123");
//	for(i=0;i<3;i++)
//		printf("%s",&s[i][i]);

	//程序填空1
//	float x,max,min;
//	scanf("%f",&x);
//	max=min=x;
//	while(x>0){
//		if(x>max)	max=x;
//		if(x<min)	min=x;
//		scanf("%f",&x);
//	}
//	printf("max=%f,min=%f\n",max,min);

	//程序填空2
//	int i=0;
//	while(i<7){
//		if(i==6)	printf("!");
//		else if(i%2==0)	printf("*");
//		else if(i%2==1)	printf("#");
//		i++;
//	}
	
	//编程1
//	int i,j,sum=0;
//	for(i=0;i<=20;i++)
//	{
//		if(i==0)	j=1;
//		else j=j*2;
//		sum += j;
//	}
//	printf("%d\n",sum);

	//编程题2(错误,ASCII码计算错误)
//	char s[10];
//	gets(s);
//	fun(s);
//	puts(s);

	return 0;
}