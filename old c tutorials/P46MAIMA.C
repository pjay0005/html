#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[5],max,min;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<5;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
		if (min>a[i])
		{
			min=a[i];
		}
	}
		printf("max=%d\n",max);
		printf("min=%d\n",min);
	getch();
}
