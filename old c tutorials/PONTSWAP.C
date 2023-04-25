#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*p,b,c,*p1,*p2;
	clrscr();
	printf("enter a=");
	scanf("%d",&a);
	p=&a;
	printf("enter b=");
	scanf("%d",&b);
	p1=&b;
	*p=*p+*p1;
	*p1=*p-*p1;
	*p=*p-*p1;
	printf("a=%d\n",*p);
	printf("b=%d",*p1);
	getch();
}