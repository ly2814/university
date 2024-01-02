#include <stdio.h>
#include <string.h>
	//33
//	int fun(int n){
//		static int x=2;
//		x+=n;
//		return x;
//	}

	//35
//	int fun(int x, int n)
//	{
//		if(n==0)	return 1;
//		else return x*fun(x,n-1);
//	}
	
	//36
//	void swap(int *p, int *q){
//		int *t;
//		t=p;p=q;q=t;
//	}
	//40(错误:返回索引错误,多加了一个)
//	double fun(double a[],int n){
//		for(int i=0;i<n-1;i++)
//			for(int j=0;j<n-1-i;j++)
//				if(a[j]<a[j+1])
//				{
//					int t = a[j];
//					a[j]=a[j+1];
//					a[j+1]=t;
//				}
//		return a[n/2];
//	}
int main(){
	//读程序
	//31
//	char str[50]="How do you do";
//	strcpy(str+strlen(str)/2,"es she");
//	printf("%s\n",str);
	
	//32
//	int a[10]={3,5,6,-1,2,-9,0,8,16,11};
//	int i,sum=0;
//	for(i=0;i<10&&a[i]%2==1;i++)
//		sum+=a[i];
//	printf("%d",sum);

	//33(错误:把fun(3)当成fun(2)算了)
//	printf("%d\n",fun(1)+fun(3));
	
	//34
//	int a[5]={1,2,3,4,5};
//	int b[5]={0,2,1,3,0},i,s=0;
//	for(i=0;i<5;i++)
//		s=s+a[b[i]];
//	printf("%d\n",s);
	
	//35
//	int i;
//	i=fun(3,2);
//	printf("%d\n",i);
	
	//36
//	int b[2]={3,5};
//	swap(&b[0],&b[1]);
//	printf("%d,%d",b[0],b[1]);
	
	//37
//	char s[]="It is a computer";
//	int i,j;
//	for(i=0;i<=7;i++){
//		j = i+8;
//		printf("%c",s[j]);
//	}
	
	//程序填空
	//38
//	int score;
//	scanf("%d",&score);
//	switch(score/10)
//	{
//		case 10:
//		case 9:printf("优\n");break;
//		case 8:printf("良\n");break;
//		case 7:
//		case 6:printf("及格\n");break;
//		default:printf("不及格\n");
//	}
	
	//编程题
	//39
//	int i,k=0,n;
//	float sum=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		k+=i;
//		sum+=1.0/k;
//	}
//	printf("%f",sum);
	
	return 0;
}