#include<stdio.h>
#include<conio.h>
void circle(int r);
void main()
{
	int r;
	clrscr();
	printf("enter r=");
	scanf("%d",&r);
	circle(r);
	getch();
}
void circle(int r)
{
	int circle;
	circle=3.14*r*r;
	printf("%d",circle);
}
