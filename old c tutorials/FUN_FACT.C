#include<stdio.h>
#include<conio.h>
void facto();
void main()
{
	clrscr();
	facto();
	getch();
}
void facto()
{
	int n,i,a=1;
	printf("enter n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	printf("%d",a);
}