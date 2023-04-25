#include<iostream.h>
#include<conio.h>
int main()
{
	int n,a,b,c,rev;
	clrscr();
	cout<<"enter n=";
	cin>>n;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	rev=a*100+b*10+c;
	cout<<rev;
	getch();
	return 0;
}