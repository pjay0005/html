#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("enter value of n=");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("n is even");
	}
	else
	{
		printf("n is odd");
	}
	getch();
}