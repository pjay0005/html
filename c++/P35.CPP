#include<iostream.h>
#include<conio.h>
void area(float r,float pi=3.14)
{
	float circle;
	circle=pi*r*r;
	cout<<"area="<<circle;
}
int main()
{
	clrscr();
	area(2);
	getch();
	return 0;
}