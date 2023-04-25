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
			if(
			i==0&&(j<n-1)||
			j==0||
			i==n-1&&(j<n-1)||
			j==n-1&&(i<n-1)&&i>0
			)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		for(j=0;j<n;j++)
		{
			if(j==0||j==n-1||i==n/2

			)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		for(j=0;j<n;j++)
		{
			if(i==0&&(j>0&&j<n-1)
			||j==0&&(i>0)
			||j==n-1&&(i>0)
			||i==n/2)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		for(j=0;j<n;j++)
		{
			if(i==0&&j<n-1||
			j==0||
			i==n/2&&j<n-1||
			j==n-1&&i>0&&i<n/2||
			i==j&&i>n/2)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		for(j=0;j<n;j++)
		{
			if(j==0||
			j==n-1||
			i==j&&j<n-i||
			j==n-1-i&&i<j)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		for(j=0;j<n;j++)
		{
			if( i==0
			  ||j==n/2
			  ||i==n-1
			  )
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		for(j=0;j<n;j++)
		{
			if(j==n/2-1||
			j==n-i-1&&i<n/2+1||
			i==j&&i>=n/2)
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