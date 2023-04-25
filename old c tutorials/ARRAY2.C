#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[3],b[3],c[3];
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
		c[i]=a[i]+b[i];
		printf("c[%d]=%d\n",i,c[i]);
	}
	getch();
}