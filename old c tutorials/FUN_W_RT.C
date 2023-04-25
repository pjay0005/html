#include<stdio.h>
#include<conio.h>
int sum(int a , int b);
int sub(int a , int b);
int mul(int a , int b);
int div(int a , int b);
void main()
{
	int a,b,c;
	clrscr();
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	c=sum(a,b);
	printf("sum=%d\n",c);
	c=sub(a,b);
	printf("sub=%d\n",c);
	c=mul(a,b);
	printf("mul=%d\n",c);
	c=div(a,b);
	printf("div=%d\n",c);
	getch();
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
}
int mul(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
int div(int a,int b)
{
	int c;
	c=a/b;
	return c;
}