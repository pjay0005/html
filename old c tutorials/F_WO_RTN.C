#include<stdio.h>
#include<conio.h>
void sum(int a , int b);
void sub(int a , int b);
void mul(int a , int b);
void div(int a , int b);
void main()
{
	int a,b;
	clrscr();
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	sum(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	getch();
}
void sum(int a,int b)
{
	int c;
	c=a+b;
	printf("sum=%d\n",c);
}
void sub(int a,int b)
{
	int c;
	c=a-b;
	printf("sub=%d\n",c);
}
void mul(int a,int b)
{
	int c;
	c=a*b;
	printf("mul=%d\n",c);
}
void div(int a,int b)
{
	int c;
	c=a/b;
	printf("div=%d\n",c);
}