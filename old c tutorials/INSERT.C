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
	printf("Enter value=");
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=value;
	n++;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	getch();
}