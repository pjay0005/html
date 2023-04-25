#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100];
	int i,cap=0,small=0;
	clrscr();
	printf("enter string=");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=97&&a[i]<=123)
		{
			small++;
		}
		else
		{
			cap++;
		}
	}
	printf("cap=%d\nsmall=%d",cap,small);
	getch();
}