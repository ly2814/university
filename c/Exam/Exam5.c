#include <stdio.h>
	//34
//int fun(int x)
//{
//	int y;
//	if(x==0||x==1)	return 3;
//	y=x*x-fun(x-2);
//	return y;
//}

	//36
//int *fun(int a[])
//{
//	int i,*q;
//	for(i=0;i<4;i++)
//		if(a[i]>90)	q=a+i+1;
//	return q;
//}

int main(){
	//读程序写结果
	//31
//	int i,j,power,sum=0;
//	for(i=1;i<4;i++)
//	{
//		power=1;
//		for(j=1;j<=i;j++)
//			power=power*2;
//		sum=sum+power;
//	}
//	printf("%d",sum);

	//32(错误:草稿纸上写对了,答案誊错了)
//	int a[3]={1,2,3}, *p=a;
//	*p++;
//	++*p;
//	printf("%d,%d,%d",a[0],a[1],a[2]);

	//33
//	struct ss
//	{
//		int x,y;
//	}a[2]={1,2,3,4},*p=a;
//	printf("%d\n",(p++)->x);
//	printf("%d\n",++p->y);

	//34
//	printf("%d",fun(3));
	
	//35
//	int s=0,i;
//	for(i=0;i<5;i++)
//		switch(i)
//		{
//			default:s+=i;
//			case 2:s++;break;
//			case 4:s+=2;
//		}
//	printf("%d\n",s);
	
	//36
//	int b[5]={80,91,99,88,55},*p;
//	p=fun(b);
//	printf("%d",*p);
	
	//程序填空
	//37
//	int x,y;
//	for(x=0;x<=30;x++)
//	{
//		y=30-x;
//		if(2*x+4*y==90)
//			printf("鸡%d只,兔%d只\n",x,y);
//	}
	
	//38
//	int i,j,t;
//	for(i=0;i<3;i++)
//		for(j=0;j<=i;j++)
//		{
//			t=a[i][j];
//			a[i][j]=a[j][i];
//			a[j][i]=t;
//		}

	//编程题
	//39
//	int i;float s[10],sum=0,aver;
//	for(i=0;i<10;i++)
//	{scanf("%f",&s[i]);sum+=s[i];}
//	aver=sum/10;
//	for(i=0;i<10;i++)
//		if(s[i]<aver)	printf("%f\t",s[i]);
	
	//40
//	int i,j,k;
//	for(i=1;i<=2;i++)
//		for(j=0;j<=2;j++)
//			for(k=0;k<=2;k++)
//				if(i!=j&&j!=k&&i!=k)
//					printf("%d%d%d ",i,j,k);
	return 0;
}