#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
	int a=12,b=123,c=1234;
	clrscr();
	cout<<setw(5)<<setfill('*')<<a<<endl;
	cout<<setw(5)<<setfill('$')<<b<<endl;
	cout<<setw(5)<<setfill('&')<<c<<endl;
	getch();
	return 0;
}