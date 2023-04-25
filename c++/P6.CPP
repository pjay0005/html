#include<iostream.h>
#include<conio.h>
int main()
{
	int n,a,b,c,sum;
	clrscr();
	cout<<"enter 3 digit=";
	cin>>n;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	sum=a+b+c;
	cout<<"sum of 3 digit="<<sum;
	getch();
	return 0;
}