#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a=1,n;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a++;
			printf("%d ",a%2);
		}
		printf("\n");
	}
	getch();

}