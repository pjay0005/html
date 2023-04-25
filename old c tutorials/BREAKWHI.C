#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	i=0;
	while(i<50)
	{
		if(i==25)
		{
			break;
		}
		printf("%d ",i);
		i++;
	}
	getch();
}