#include<iostream.h>
#include<conio.h>
int main()
{
	int a,b;
	clrscr();
	cout<<"Enter a=";
	cin>>a;
	cout<<"Enter b=";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swap a="<<a<<endl<<"After swap b="<<b;
	getch();
	return 0;
}