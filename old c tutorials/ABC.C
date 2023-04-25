#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n,a=65;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=n;k>i;k--)
		{
			printf("  ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%c ",a+j);
		}
		for(j=i-1;j>=0;j--)
		{
			printf("%c ",a+j);
		}
		printf("\n");
	}
	getch();
}