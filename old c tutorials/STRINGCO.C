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
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='0';
	puts(a);
	getch();
}