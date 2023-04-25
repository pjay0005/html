#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" %d",i);
		}
		printf("\n");
	}
	getch();
}