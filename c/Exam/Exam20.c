#include <stdio.h>
#include <math.h>
#include <string.h>

//31
//int fun(int a,int b){
//	static int i=1,j=2;
//	i+=j+1;
//	j=i+a+b;
//	return j;
//}

//33
//void exlarge(int *p,int x)
//{
//	*p*=10;
//	x*=10;
//}

//34
//void fun(int n)
//{
//	printf("%d",n%10);
//	if(n>=10)
//		fun(n/10);
//}

//36
#define F(x) 4*(x)*x+1
#undef F

//37
//struct student{
//	int num;
//	char name[10];
//	int score[3];
//};
//void print(struct student t);

//38
#define N 6
//double fun(int w[][N])
//{
//	int i;
//	double s=0.0;
//	for(i=0;i<N;i++){
//		s+=w[0][i];
//		s+=w[N-1][i];
//	}
//	for(i=1;i<=N-2;i++){
//		s+=w[i][0]+w[i][5];
//	}
//	return s/=(N-2)*(N-2);
//}
#undef N

//39
//数组名b写成a,t存的应该是b[i],写成了b[k]
//void Select_Sort(int b[],int a)
//{
//	int i,j,k,t;
//	for(i=0;i<a-1;i++)
//	{
//		k=i;
//		for(j=k+1;j<a;j++)
//			if(b[j]<b[k])	k=j;
//		t=b[i];b[i]=b[k];b[k]=t;
//	}
//}
int main(){
	//31
//	int k=3,m=4;
//	printf("%d\n",fun(k,m));
//	printf("%d\n",fun(k,m));
	
	//32
//	int i;
//	scanf("%d",&i);
//	switch(i+1)
//	{
//		case 1:printf("a=1\n");
//		case 2:printf("a=2\n");
//		case 3:printf("a=3\n");break;
//		default:printf("a=other\n");
//	}
	//33
//	int a=3,b=5,*p=&a;
//	exlarge(p,b);
//	printf("a=%d,b=%d",a,b);
	
	//34
//	int n;
//	scanf("%d",&n);
//	fun(n);
	
	//35
//	int i,a[3][3]={1,2,3,4,5,6,7,8,9},*p=&a[1][1];
//	for(i=0;i<4;i+=2)
//		printf("%d,",p[i]);
	
	//36
//	int a=2,b=5;
//	printf("%d\n",F(a+b));
	
	//程序填空
	//37
//	struct student s;
//	s.num=200301;
//	strcpy(s.name,"王芳");
//	s.score[0]=70;
//	s.score[1]=80;
//	s.score[2]=90;
//	print(s);
	
	//38
//	int a[N][N],i,j;
//	for(i=0;i<N;i++)
//	for(j=0;j<N;)
//		scanf("%d",a[i]+j++);
//	printf("%f\n",fun(a));
	
	//编程题
	//39
//	int a[]={1,2,4,0,8};
//	Select_Sort(a,5);
//	for(int i=0;i<5;i++)
//	{
//		printf("%d\t",a[i]);
//	}
	
	//40
//	float pi=0,i,k=1;
//	for(i=1;k/i/i>=1E-7;i++)
//	{
//		pi+=k/i/i;
//	}
//	pi=sqrt(pi*6);
//	printf("%0.4f",pi);

	return 0;
}

//37
//void print(struct student t)
//{
//	printf("%d\n%s\n%d,%d,%d",t.num,t.name,t.score[0],t.score[1],t.score[2]);
//}