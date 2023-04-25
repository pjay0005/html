#include<iostream.h>
#include<conio.h>
class maths//class name
{
	public:
	int a,b,sum,sub,mul,div;
	void getdata()
	{
		cout<<"enter a = ";
		cin>>a;
		cout<<"enter b = ";
		cin>>b;
	}
	void total()
	{
		sum=a+b;
		sub=a-b;
		mul=a*b;
		div=a/b;
	}
	void putdata()
	{
		cout<<"-------------"<<endl;
		cout<<"sum     = "<<sum<<endl;
		cout<<"sub     = "<<sub<<endl;
		cout<<"mul     = "<<mul<<endl;
		cout<<"div     = "<<div<<endl;
		cout<<"-------------"<<endl;
	}
};
int main()
{
	maths m;
	clrscr();
	m.getdata();
	m.total();
	m.putdata();
	getch();
	return 0;
}

//prinsi  gangani