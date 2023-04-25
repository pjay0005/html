#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	getch();
}