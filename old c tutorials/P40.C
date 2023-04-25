#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,n,i;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	printf("%d",a);
	printf(" %d",b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d",c);
	}
	getch();
}