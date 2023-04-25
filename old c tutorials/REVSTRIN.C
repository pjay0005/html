#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100];
	int i,l=0,rev;
	clrscr();
	printf("enter string a=");
	gets(a);
	strrev(a);
	puts(a);
	getch();
}