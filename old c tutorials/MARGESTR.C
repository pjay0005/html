#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int i,j,l1=0,l2=0;
	clrscr();
	printf("enter string a=");
	gets(a);
	printf("enter string b=");
	gets(b);
	strcat(a,b);
	puts(a);
	getch();
}