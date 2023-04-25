#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	for(i=1;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==n-1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	for(i=2;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	for(i=3;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==n-1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	getch();
}