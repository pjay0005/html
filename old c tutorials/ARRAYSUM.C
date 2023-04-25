#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[5],sum=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
		printf("sum=%d",sum);
	getch();
}