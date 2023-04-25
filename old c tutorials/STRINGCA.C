#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int i,f=0;
	clrscr();
	printf("enter string a=");
	gets(a);
	printf("enter string b=");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		printf("both are same");
	}
	else
	{
		printf("both are not same");
	}
	getch();
}