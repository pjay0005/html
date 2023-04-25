#include<iostream.h>
#include<conio.h>
int main()
{
	int quo,rem,n;
	clrscr();
	cout<<"enter num=";
	cin>>n;
	quo=n/10;
	rem=n%10;
	cout<<"Quotient="<<quo<<endl<<"Reminder="<<rem;
	getch();
	return 0;
}