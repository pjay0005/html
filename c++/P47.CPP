#include<iostream.h>
#include<conio.h>
class con//class name
{
	public:
	int hrs,sec,min;
	void getdata()
	{
		cout<<"enter hrs = ";
		cin>>hrs;
	}
	void total()
	{
		min=hrs*60;
		sec=min*60;
	}
	void putdata()
	{
		cout<<"------------";
		cout<<"\nmin="<<min;
		cout<<"\nsec="<<sec;
	}
};
int main()
{
	con c;
	clrscr();
	c.getdata();
	c.total();
	c.putdata();
	getch();
	return 0;
}