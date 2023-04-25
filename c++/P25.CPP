#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
	int b,d,f;
	char a[10],c[10],e[10];
	clrscr();
	cout<<"enter char a=";
	cin>>a;
	cout<<"enter num b=";
	cin>>b;
	cout<<"enter char c=";
	cin>>c;
	cout<<"enter num d=";
	cin>>d;
	cout<<"enter char e=";
	cin>>e;
	cout<<"enter num f=";
	cin>>f;
	cout<<setw(10)<<setfill('*')<<a<<setw(10)<<setfill('*')<<b<<endl;
	cout<<setw(10)<<setfill('#')<<c<<setw(10)<<setfill('#')<<d<<endl;
	cout<<setw(10)<<setfill('+')<<e<<setw(10)<<setfill('+')<<f<<endl;
	getch();
	return 0;
}