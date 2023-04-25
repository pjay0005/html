#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	getch();
}