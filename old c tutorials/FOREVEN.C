#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a,n,k;
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	a=2;
	for(i=1;i<=n;i++)
	{
		for(k=i;k<=n;k++)
		{
			printf("   ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%2d ",a++);
			a=a+1;
		}
		printf("\n");
	}
	getch();
}