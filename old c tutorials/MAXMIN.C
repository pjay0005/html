#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("enter value of c=");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is max\n");
		}
		else
		{
			printf("c is max\n");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is max\n");
		}
		else
		{
			printf("c is max\n");
		}
	}
	if(a<b)
	{
		if(a<c)
		{
			printf("a is min\n");
		}
		else
		{
			printf("c is min\n");
		}
	}
	else
	{
		if(b<c)
		{
			printf("b is min\n");
		}
		else
		{
			printf("c is min\n");
		}
	}

	getch();
}