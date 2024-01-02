#include <stdio.h>
#include <string.h>
#include <math.h>
//34
//void fun(int *x,int *y)
//{
//	int *z;
//	z=x;x=y;y=z;
//	printf("%d,%d\n",*x,*y);
//}
//36
//void func(int a[],int n)
//{
//	int i,j,t;
//	for(i=0;i<=n-1;i++)
//		for(j=i+1;j<n;j++)
//			if(a[i]<a[j])	{t=a[i];a[i]=a[j];a[j]=t;}
//}
//38
//void fun(char s[],int len)
//{
//	char *p=s,*q=s+len-1;
//	char t;
//	while(p<q){
//		t=*p;*p=*q;*q=t;
//		p++;
//		q--;
//	}
//}
int main(){
	//读程序写结果
	//31
//	int a[5]={33,1,5,22,54},b[5];
//	int i;
//	for(i=0;i<5;i++)
//		b[a[i]%5]=a[i];
//	for(i=0;i<5;i++)
//		printf("%d\t",b[i]);
		
	//32
//	int n,m=3,*p=&m;
//	n=*p++;
//	printf("%d,%d\n",n,m);
	
	//33
//	int a[]={10,20,30,40},b[]={40,20,50,40};
//	int *p=a,*q=b;
//	int i,s=0;
//	for(i=0;i<4;i++)
//		if(*(p+i)==*(q+i))
//			s+=*(p+i)*2;
//	printf("%d",s);

	//34
//	int a=3,b=6;
//	fun(&a,&b);
//	printf("%d,%d\n",a,b);
	
	//35(错误:最后一个逗号忘记输出了)
//	int x[10]={1,2,3,4,5,6,7,8,9,10},i;
//	func(&x[3],5);
//	for(i=0;i<10;i++)	printf("%d,",x[i]);
//	printf("\n");
	
	//36
//	FILE * fp;
//	char s[50];
//	fp=fopen("d:\\file.txt","w");
//	fputs("Tianjin",fp);
//	fclose(fp);
//	fp=fopen("d:\\file.txt","r");
//	fgets(s,5,fp);
//	printf("%s\n",s);
//	fclose(fp);
	
	//程序填空题
	//37
//	int n,count=0;
//	scanf("%d",&n);
//	while(n!=0){
//		count++;
//		n=n/10;
//	}
//	printf("该整数是%d位数",count);
	
	//38
//	char a[20]="abcd";
//	fun(a,4);
//	puts(a);
	
	//编程题
	//39(错误:循环内执行顺序有问题)
	float t=1,s=0,i=1;
	int count=0,k=1;
	while(fabs(t)>=1E-6)
	{	
		s+=t;
		i+=3;
		k=k*(-1);
		t=k/i;
		count++;
	}
	printf("s=%f,count=%d",s,count);
//	printf("s=%f count=%d\n",sum,count);
	
	//40(错误:笔误i-2写成i+2)
//	int a[30]={1,1},i;
//	for(i=2;i<30;i++)
//		a[i]=a[i-1]+a[i-2];
//	for(i=0;i<30;i++)
//		printf("%d ",a[i]);
//	printf("\n");
	return 0;
}