#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<i;k++)
		{
			printf("  ");
		}
		for(j=n;j>i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}