#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[100],b[100],pos,neg,n;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(pos>a[i])
		{
			pos=a[i];
		}
		printf("%d ",pos);
	}
	for(i=0;i<n;i++)
	{
		if(neg<a[i])
		{
			neg=a[i];
		}
		printf("%d ",neg);
	}
	getch();
}