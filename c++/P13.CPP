#include<iostream.h>
#include<conio.h>
int main()
{
	int n,days,years,weeks;
	clrscr();
	cout<<"enter days=";
	cin>>days;
	years=days/365;
	cout<<"years="<<years;
	days=days%365;
	weeks=days/7;
	cout<<"\nweek="<<weeks;
	days=days%7;
	cout<<"\ndays="<<days;
	getch();
	return 0;
}