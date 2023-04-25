#include<stdio.h>
#include<conio.h>
void sum();
void sub();
void mul();
void div();
void main()
{
	clrscr();
	sum();
	sub();
	mul();
	div();
	getch();
}
void sum()
{
	int a,b,c;
	printf("For Sum\n");
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	c=a+b;
	printf("sum=%d\n\n",c);
}
void sub()
{
	int a,b,c;
	printf("For Sub\n");
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	c=a-b;
	printf("sub=%d\n",c);
}
void mul()
{
	int a,b,c;
	printf("For Mul\n");
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	c=a*b;
	printf("mul=%d\n",c);
}
void div()
{
	int a,b,c;
	printf("For Div\n");
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	c=a/b;
	printf("div=%d\n",c);
}