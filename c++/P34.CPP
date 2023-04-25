#include<iostream.h>
#include<conio.h>
float si(int a, int b,float r=2.5)
{
	return (a*b*r)/100;
}
int main()
{
	float a,b;
	clrscr();
	cout<<"enter a=";
	cin>>a;
	cout<<"enter b=";
	cin>>b;
	cout<<"si="<<si(a,b);
	getch();
	return 0;
}
