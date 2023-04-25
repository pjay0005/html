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
		for(k=i;k<n-1;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}