#include<iostream.h>
#include<conio.h>
int a=20;//global decleration
int main()
{
	int a=10;//local decleration
	clrscr();
	{
		cout<<"a="<<a<<endl<<"a::="<<::a;
	}
	getch();
	return 0;
}