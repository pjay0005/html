#include<iostream.h>
#include<conio.h>
int a=20;//global declaration
int main()
{
	int b=10;//local declaration
	clrscr();
	{
		cout<<"sum="<<::a+b<<endl<<"sub="<<::a-b<<endl<<"mul="<<::a*b<<endl<<"div="<<::a/b;
	}
	getch();
	return 0;
}