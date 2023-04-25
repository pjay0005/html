#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,*p;
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	p=&a[0];
	for(i=0;i<n;i++)
	{
		printf("%d\n",*p++);

	}
	getch();
}