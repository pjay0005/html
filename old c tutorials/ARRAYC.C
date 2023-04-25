#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[100],b[100],c[100];
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
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n*2;i++)
	{
		c[i+n]=b[i];
		printf("c[%d]=%d\n",i,c[i]);
	}
	getch();
}