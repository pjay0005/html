#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*p,b,*sum,*p1;
	clrscr();
	printf("enter a=");
	scanf("%d",&a);
	p=&a;
	printf("enter b=");
	scanf("%d",&b);
	p1=&b;
	*sum=*p+*p1;
	printf("address of sum= %x\n",sum);
	printf("sum=%d",*sum);
	getch();
}