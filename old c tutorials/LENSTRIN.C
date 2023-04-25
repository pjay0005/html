#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100];
	int i;
	clrscr();
	printf("enter string=");
	gets(a);
	i=strlen(a);
	printf("%d",i);
	getch();
}