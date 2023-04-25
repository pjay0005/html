#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*p;
	clrscr();
	printf("enter a=");
	scanf("%d",&a);
	p=&a;
	printf("address of value= %x\n",p);
	printf("value= %d",*p);
	getch();
}