#include<stdio.h>
#include<conio.h>
int sum();
int sub();
int mul();
int div();
void main()
{
	int c;
	clrscr();
	c=sum();
	printf("sum=%d\n",c);
	c=sub();
	printf("sub=%d\n",c);
	c=mul();
	printf("mul=%d\n",c);
	c=div();
	printf("div=%d\n",c);
	getch();
}
int sum()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	c=a+b;
	return c;
}
int sub()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	c=a-b;
	return c;
}
int mul()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	c=a*b;
	return c;
}
int div()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	c=a/b;
	return c;
}