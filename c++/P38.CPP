#include<iostream.h>
#include<conio.h>
void volume(int c)
{
	int cube;
	cube=c*c*c;
	cout<<"volume of cube="<<cube;
}
void volume(float pi, int r, int h)
{
	int cyli;
	cyli=pi*r*r*h;
	cout<<"volume of cyli="<<cyli;
}
int main()
{
	int c,r,h;
	float pi;
	clrscr();
	cout<<"c=";
	cin>>c;
	volume(c);
	cout<<"r=";
	cin>>r;
	cout<<"h=";
	cin>>h;
	volume(r,h,pi);
       //	volume(2,2,2);
	getch();
	return 0;
}