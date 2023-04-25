#include<stdio.h>
#include<conio.h>
void main()
{       int year,week,month,day;
	clrscr();
	printf("Enter n days=");
	scanf("%d",&day);
	year=day/365;
	printf("year=%d\n",year);
	day=day%365;
	week=day/7;
	printf("week=%d\n",week);
	day=day%7;
	printf("day=%d\n",day);
	getch();
}