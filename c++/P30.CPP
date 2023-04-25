#include<iostream.h>
#include<conio.h>
inline int cube (int n)
{
	return n*n*n;
}
int main()
{
	int n,c;
	clrscr();
	cout<<"enter n=";
	cin>>n;
	c=cube(n);
	cout<<"n of cube="<<c;
	getch();
	return 0;
}