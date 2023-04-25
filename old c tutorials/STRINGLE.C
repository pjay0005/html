#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100];
	int len=0,i;
	clrscr();
	printf("enter string=");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("%d",len);
	getch();
}