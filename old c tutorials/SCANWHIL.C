#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter value of n=");
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		j=0;
		while(j<n)
		{
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
	getch();
}