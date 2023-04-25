#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n,a;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=n;k>i;k--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(j=i-1;j>0;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}