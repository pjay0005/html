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
	for(i=0;a[i]!='\0';i++)
	{
		l1++;
	}
	for(i=0;b[i]!='\0';i++)
	{
		l2++;
	}
	for(i=0;i<=l1;i++)
	{
		a[l1+i]=b[i];
	}
	puts(a);
	getch();
}