#include<iostream.h>
#include<conio.h>
class con//class name
{
	public:
	float f,c,c1,f1;
	void getdata()
	{
		cout<<"enter fahrenheit = ";
		cin>>f;
		cout<<"enter celsius = ";
		cin>>c1;
	}
	void total()
	{
		c=(f-32)*5/9;
		f1=(c1*9/5)+32;
	}
	void putdata()
	{
		cout<<"ce="<<c;
		cout<<"\nfe="<<f1;
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