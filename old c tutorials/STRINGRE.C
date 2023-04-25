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
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;i<l/2;i++)
	{
		rev=a[i];
		a[i]=a[l-i-1];
		a[l-i-1]=rev;
	}
	puts(a);
	getch();
}