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
	strupr(a);
	if(a[i]>=97&&a[i]<=123)
	{
		a[i]=a[i]-32;
	}
	puts(a);
	getch();
}