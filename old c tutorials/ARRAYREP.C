#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[100],max=0,n,rep=0;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
	}
		printf("max=%d",max);
	for(i=0;i<n;i++)
	{
		if (max==a[i])
		{
			rep++;
		}
	}
		printf("rep=%d",rep);
	getch();
}