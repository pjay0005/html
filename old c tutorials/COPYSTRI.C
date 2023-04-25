#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int i;
	clrscr();
	printf("enter string=");
	gets(a);
	strcpy(b,a);
	b[i]='0';
	puts(b);
	getch();
}