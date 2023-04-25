#include<stdio.h>
#include<conio.h>
void fibonacci();
void main()
{
	clrscr();
	fibonacci();
	getch();
}
void fibonacci()
{
	int c,i,a=0,b=1,n;
	printf("enter n=");
	scanf("%d",&n);
	printf("%d ",a);
	printf("%d ",b);
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}