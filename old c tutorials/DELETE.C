#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,pos,a[100],value;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	printf("Enter pos=");
	scanf("%d",&pos);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	getch();
}