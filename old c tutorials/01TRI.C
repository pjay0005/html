#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
	getch();

}