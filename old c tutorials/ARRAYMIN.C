#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[5],min;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<5;i++)
	{
		if (min>a[i])
		{
			min=a[i];
		}
	}
		printf("min=%d",min);
	getch();
}