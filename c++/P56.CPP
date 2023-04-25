#include<iostream.h>
#include<conio.h>
class B;
class A
{
	public:
	int a;
	void getdata()
	{
		cout<<"a=";
		cin>>a;
	}
	friend void putdata(A,B);
};
class B
{
	public:
	int b;
	void getdata()
	{
		cout<<"b=";
		cin>>b;
	}
	friend void putdata(A,B);
};
void putdata(A h1,B h2)
{
	if(h1.a>h2.b)
	{
		cout<<"a is max = "<<h1.a;
	}
	else
	{
		cout<<"b is max = "<<h2.b;
	}
}
int main()
{
	A p1;
	B p2;
	clrscr();
	p1.getdata();
	p2.getdata();
	putdata(p1,p2);
	getch();
	return 0;
}