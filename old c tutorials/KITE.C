#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=n-1;k>i;k--)
		{
			printf("  ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		for(j=0;j<=i-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=n-1;i>0;i--)
	{
		for(k=n;k>i;k--)
		{
			printf("  ");
		}
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		for(j=0;j<i-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=1;i<n-2;i++)
	{
		for(k=n-1;k>i;k--)
		{
			printf("  ");
		}
		for(j=0;j<i+1;j++)
		{
			printf("* ");
		}
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}