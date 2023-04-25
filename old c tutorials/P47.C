#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,a[100],b[100],c[100];
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<n;j++)
	{
		c[i]=b[j];
		i++;
	}
	for(i=0;i<2*n;i++)
	{
		printf("%d\n",c[i]);
	}
	getch();
}