#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n,m;
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	m=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",m++);
		}
		printf("\n");
	}
	getch();
}