#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=0;
	while(i<5)
	{
		j=0;
		while(j<5)
		{
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
	getch();
}