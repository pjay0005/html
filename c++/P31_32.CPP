#include<iostream.h>
#include<conio.h>
inline int sum (int a,int b)
{
	return a+b;
}
int main()
{
	int a,b,add;
	clrscr();
	cout<<"enter a=";
	cin>>a;
	cout<<"enter b=";
	cin>>b;
	add=sum(a,b);
	cout<<"sum="<<add;
	getch();
	return 0;
}