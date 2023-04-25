#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int i,f;
	clrscr();
	printf("enter string a=");
	gets(a);
	printf("enter string b=");
	gets(b);
	i=strcmp(a,b);
	if(i==0)
	{
		printf("both are same");
	}
	else
	{
		printf("both are not same");
	}
	getch();
}