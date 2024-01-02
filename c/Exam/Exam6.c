#include <stdio.h>
#include <string.h>
//32
//struct St
//{
//	int a,b;
//}d[2]={10,100,20,200};

//34
//int fun(int x,int y)
//{
//	if(x!=y)	return((x+y)/2);
//	else return(x);
//}

//35(错误:此处为值传递,改变的是形参p,不影响主函数中的字符串)
//void fun(char *p)
//{
//	p+=2;
//}

//36
//int fun(int x[],int n){
//	static int sum=0,i;
//	for(i=0;i<n;i++)
//		sum+=x[i];
//	return sum;
//}

//38(错误:条件当成删除数字元素了)
//void Select(char s[], char t[])
//{
//	int i,j=0;
//	for(i=0;i<strlen(s);i++)
//		if(s[i]>='0'&&s[i]<='9')
//		{
//			t[j]=s[i];
//			j++;
//		}
//	t[j]='\0';
//}
int main(){
	//读程序写结果
	//31
//	int n=1989,s=0;
//	while(n!=0)
//	{
//		s=s*10+n%10;
//		n/=10;
//	}
//	printf("%d\n",s);
	
	//32
//	struct St k=d[1];
//	printf("%d\n",++k.a);
	
	//33
//	char *p[3]={"Beijing","TianJin","Shanghai"};
//	int i;
//	for(i=0;i<3;i++)
//		printf("%s\n",p[i]);
	
	//34
//	int a=4,b=5,c=6;
//	printf("%d\n",fun(2*a,fun(b,c)));
	
	//35
//	char *s="Sunday";
//	fun(s);
//	printf("%s\n",s);

	//36
//	int a[]={1,2,3,4,5},b[]={6,7,8,9},s=0;
//	s=fun(a,5)+fun(b,4);
//	printf("s=%d\n",s);
	
	//程序填空
	//37
//	int a[5]={1,2,3,4,5},i,j;
//	int b[6]={0,2,4,6,8,10};
//	for(i=0;i<5;i++)
//		for(j=0;j<5;j++){
//			if(a[i]!=b[j])	continue;
//			else printf("%d",b[j]);
//		}

	//38
//	char s[80],t[80];
//	printf("请输入一个字符串:");
//	scanf("%s",s);
//	Select(s,t);
//	printf("结果: %s\n",t);
	
	//编程题
	//39
//	int a[5][5],i,j,sum=0;
//	for(i=0;i<5;i++)
//		for(j=0;j<5;j++)
//		{
//			scanf("%d",&a[i][j]);
//			if(i==j)	sum+=a[i][j];
//		}
//	printf("%d",sum);

	//40(错误:变量设置错误,声明的是ab,输入的是ak,)
//	int a,b,k;
//	scanf("%d%d",&a,&b);
//	k=a<b?a:b;
//	while(1)
//	{
//		if(k%a==0&&k%b==0)	break;
//		k++;
//	}
//	printf("%d",k);
	return 0;
}