#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a;
	clrscr();
	printf("enter string=");
	scanf("%c",&a);
	if(isalpha(a))
	{
		printf("It is alphabet.");
	}
	else
	{
		printf("It is not alphabet.");
	}
	getch();
}