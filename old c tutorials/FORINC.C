#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a,n;
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	a=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",a++);
		}
		printf("\n");
	}
	getch();
}