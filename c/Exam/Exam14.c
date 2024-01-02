#include <stdio.h>
#include <string.h>

//36
//int x=2,t;
//int fun(int x,int y)
//{
//	t=x*y;
//	return t;
//}

//37
//int fun(char s[],int len)
//{
//	char *p,*q;
//	p=s;
//	q=s+len-1;
//	while(p<q)
//	{
//		if(*p!=*q)	return 0;
//		p++;
//		q--;
//		return 1;
//	}
//}

int main()
{
	//31
//	char s[50]="string";
//	s[2]='0';
//	s[3]=0;
//	printf("%s\n",s);
	
	//32(错误:while理解错误)
//	int i=0;
//	char s1[10]="1234",s2[10]="567";
//	strcat(s1,s2);
//	while(s2[i++]!='\0')	s2[i]=s1[i];
//	printf("%s\n",s2);
	
	//33
//	int a[2]={0},i,j;
//	for(i=0;i<2;i++)
//		for(j=0;j<2;j++)
//		{
//			a[j]=a[i]+1;
//			a[i]=a[j]+1;
//		}
//	printf("%d,%d\n",a[0],a[1]);
	
	//34
//	int i;
//	for(i=4;i>=1;i--)
//	{
//		switch(i)
//		{
//			case 4:printf("*");
//			case 3:printf("*");
//			case 2:printf("*");
//			case 1:printf("*");
//			default:printf("\n");
//		}
//	}
	
	//35
//	int x,y,t;
//	scanf("%d%d",&x,&y);
//	while(x!=y)
//	{
//		if(x<y)	{t=x;x=y;y=t;}
//		printf("%d %d",x,y);
//		scanf("%d%d",&x,&y);
//	}
	
	
	//36
//	x=fun(3,3);
//	printf("x=%d\n",x);
	
	//程序填空
	//37
//	char s[]="abcba";
//	printf("%d",fun(s,5));
	
	//38(条件错误)
//	int i,j;
//	for(i=1;i<=6;i++)
//	{
//		for(j=1;j<=6;j++)
//		{
//			if((j-i)%2==0)	printf("*");
//			else printf("#");
//		}
//		printf("\n");
//	}
	
	//编程题
	//39
//	float k=1,n,e=1;
//	int i,j=1;
//	for(i=1;;i++)
//	{
//		printf("Running\n");
//		j=j*i;
//		n=k/j;
//		if(n<1E-6) break;
//		else e+=n;
//	}
//	printf("%f\n",e);

	//40(错误:b[j++]写成了a[j++])
//	int a[10]={1,2,3,4,5,6,7,8,9,0},b[10],i,j=0;
//	for(i=0;i<10;i++)
//		if(a[i]%2)	b[j++]=a[i];
//	printf("数组a:");
//	for(i=0;i<10;i++)
//		printf("%d\t",a[i]);
//	printf("\n数组b:");
//	for(i=0;i<j;i++)
//		printf("%d\t",b[i]);
//	printf("\n");
	return 0;
}