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
			if(i==n/2||
			   j==n/2||
			   i==0&&j>n/2||
			   i==n-1&&j<n/2||
			   j==0&&i<n/2||
			   j==n-1&&i>n/2||
			   j==n/4&&i==n/4||
			   j==n-n/4-1&&i==n-n/4-1||
			   j==n/4&&i==n-n/4-1||
			   j==n-n/4-1&&i==n/4

			)
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