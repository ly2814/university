#include <stdio.h>
#include <string.h>
	//33
//	void fun(int *p)
//	{
//		while((*p)--);
//	}

	//35
//	void fun(int n)
//	{
//		if(n>0)	fun(n-1);
//		printf("%d",n);
//	}

	//40(错误:判断条件 j没有迭代)
//	void delete_num(char s[]){
//		int i,j=0;
//		for(i=0;s[i];i++)
//		{
//			if(!(s[i]>='0'&&s[i]<='9'))
//			{
//				s[j]=s[i];
//				j++;
//			}
//		}
//		s[j]='\0';
//	}
int main(){
	//读程序写结果
	//31
//	char ch;
//	int i,j;
//	for(i=0;i<2;i++)
//	{
//		ch=getchar();
//		switch(ch)
//		{
//			case '1':printf("A");
//			case '2':printf("B");
//		}
//	}
	//32
//	int i;
//	for(i=8;i>0;i--)
//	{
//		if(i%3)
//		{
//			printf("%d\t",i--);
//			continue;
//		}
//		printf("%d\t",--i);
//	}

	//33
//	int a=3;
//	fun(&a);
//	printf("a=%d\n",a);

	//34
//	int a[2][3]={1,2,3,4,5,6};
//	int sum=0,*p=a[0],i;
//	for(i=0;i<6;i+=2)	sum+=p[i];
//	printf("%d",sum);

	//35
//	int a[3][3]={1,2,3,4,5,6,7,8,9};
//	int i,j;
//	for(i=0;i<2;i++)
//		for(j=0;j<2;j++)
//			a[i+1][j+1]+=a[i][j];
//	printf("%d",a[i][j]);

	//36
//	fun(3);

	//程序填空
	//37
//	int i,j;
//	for(i=0;i<10;i++)
//	{
//		j=i*10+5;
//		if(j%3!=0)	continue;
//		printf("%d\t",j);
//	}

	//38
//	int a[8]={-5,8,-6,9,-12,7,14,-36};
//	int i,sum=0;
//	for(i=0;i<8;i++)
//		if(a[i]%2==0)
//		{
//			if(a[i]>0)	sum+=a[i];
//			if(a[i]<0)	sum-=a[i];
//		}
//	printf("sum=%d",sum);

	//编程题
	//39
//	int i,j,r,c,a[3][3]={1,2,3,4,5,6,7,8,9};
//	r=c=0;
//	for(i=0;i<3;i++)
//		for(j=0;j<3;j++)
//			if(a[i][j]>a[r][c])
//			{
//				r=i;
//				c=j;
//			}
//	printf("%d\t%d\n",r,c);

	//40
//	char s[20]="1+2=3";
//	delete_num(s);
//	printf("%s",s);
	return 0;
}