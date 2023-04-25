#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
	int a,c;
	float b;
	clrscr();
	cout<<"enter a=";
	cin>>a;
	cout<<"enter point value b=";
	cin>>b;
	cout<<"enter c=";
	cin>>c;
	cout<<setw(5)<<setfill('_')<<a<<endl;
	cout<<setprecision(2)<<b<<endl;
	cout<<setw(5)<<setfill('_')<<c<<endl;
	getch();
	return 0;
}