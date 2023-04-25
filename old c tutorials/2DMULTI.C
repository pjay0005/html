#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n,a[10][10],b[10][10],c[10][10],sum;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{

		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;

			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

	getch();
}