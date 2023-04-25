#include<iostream.h>
#include<conio.h>
void add(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
}
int main()
{
	int a,b;
	clrscr();
	cout<<"enter a=";
	cin>>a;
	cout<<"enter b=";
	cin>>b;
	add(a,b);
	cout<<"a="<<a<<endl<<"b="<<b;
	getch();
	return 0;
}