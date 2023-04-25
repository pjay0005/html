#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100];
	int i;
	clrscr();
	printf("enter string a=");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=91)
		{
			a[i]=a[i]+32;
		}
	}
	puts(a);
	getch();
}