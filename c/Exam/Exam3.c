#include <stdio.h>
//33
//int a,b;
//void fun()
//{
//	a=3;b=4;
//}

//35
//void insert(char s[],int len){
//	int i;
//	for(i=len;i>0;i--)
//	{
//		s[2*i]=s[i];
//		s[2*i-1]='#';
//	}
//}

//36
//void fun(int x, int y, int z){
//	z=x*x+y*y+z*z;
//}
int main(){
	//选择
	//20
//	int a[3][4];
//	for(int i=0;i<3;i++)
//		for(int j=0;j<4;j++)
//			a[i][j]=2;
//	printf("a:%d\n",a[3][4]);
//	printf("b:%d\n",*(a+1)+2);
//	printf("c:%d\n",a[2][3/2]);
//	printf("d:%d\n",a[0]);
	
	//填空
	//21
//	putchar(65);
	//22(错误:看串了)
//	char *p="Beijing";
//	putchar(*p++);
	//23
//	printf("%d",2>!3+5);
	//27
//	printf("%d",(3,5));
	//28
//	int a[7],*p=&a[3],*q=&a[5];
//	printf("%d",q-p);
//	printf("%f",1E1);

	//读程序
	//31
//	int x=21;
//	printf("%d,%o,%x\n",x,x,x);
//	return 0;

	//32
//	int r;
//	char x,y,z;
//	scanf("%c%c%c",&x,&y,&z);
//	switch(z)
//	{
//		case '+':r=x+y;break;
//		case '-':r=x-y;break;
//		case '*':r=x*y;break;
//		case '/':r=x/y;break;
//	}
//	printf("%d\n",r);
	
	//33
//	int a=5, b=6;
//	fun();
//	printf("%d,%d\n",a,b);

	//34
//	int i=0, j=0, k=5;
//	if((++i>0)||(++j>0))	k++;
//	printf("i=%d,j=%d,k=%d",i,j,k);

	//35
//	char s[10]="abc";
//	insert(s,3);
//	printf("%s\n",s);
	
	//36
//	int a=6;
//	fun(3,4,a);
//	printf("a=%d\n",a);

	//37
//	int x,y,t;
//	scanf("%d%d",&x,&y);
//	while(x!=y)
//	{
//		if(x>y)	{t=x;x=y;y=t;}
//		printf("%d,%d\n",x,y);
//		scanf("%d%d",&x,&y);
//	}

	//程序填空
	//38
//	int i=1,j=0;
//	do{
//		if(i%3==2&&i%5==3&&i%7==1)
//		{
//			printf("%5d",i);
//			j++;
//			if(j%3==0)	printf("\n");
//		}
//		i++;
//	}while(i<1000);
	
	//39
//	float x,y;
//	int k=0;
//	scanf("%f%f",&x,&y);
//	if(x>0)
//	{
//		if(y>0)	k=1;
//		else if(y<0)	k=4;
//	}
//	else if(x<0)
//	{
//		if(y>0)	k=2;
//		else if(y<0)	k=3;
//	}
//	if(k!=0)	printf("第%d象限",k);
//	else	printf("坐标轴上");

	//编程题
	//40
//	char s[20];
//	gets(s);
//	int i,sum=0;
//	for(i=0;s[i]!=0;i++)
//		if(s[i]>='0'&&s[i]<='9')
//			sum+=s[i]-'0';
//	printf("sum=%d",sum);
	return 0;
}