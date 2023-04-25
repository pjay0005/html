#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a;
	clrscr();
	printf("enter string=");
	scanf("%c",&a);
	if(isdigit(a))
	{
		printf("It is digit.");
	}
	else
	{
		printf("It is not digit.");
	}
	getch();
}