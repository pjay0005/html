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
		printf("a is max");
	}
	else if(b<c)
	{
		printf("c is max");
	}
	else
	{
		printf("b is max");
	}

	getch();
}