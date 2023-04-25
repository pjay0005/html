#include<iostream.h>
#include<conio.h>
int main()
{
	int a,b,min,max;
	clrscr();
	cout<<"enter a=";
	cin>>a;
	cout<<"enter b=";
	cin>>b;
	(a>b)?cout<<"a is max":cout<<"b is max";
	(a<b)?cout<<"\na is min":cout<<"\nb is min";
	getch();
	return 0;
}