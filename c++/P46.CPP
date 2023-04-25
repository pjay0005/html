#include<iostream.h>
#include<conio.h>
class con//class name
{
	public:
	float feet,inch;
	void getdata()
	{
		cout<<"enter inch = ";
		cin>>inch;
		cout<<"enter feet = ";
		cin>>feet;
	}
	void total()
	{
		feet=inch/12;
		inch=feet*12;
	}
	void putdata()
	{
		cout<<"------------";
		cout<<"\nfeet="<<feet;
		cout<<"\ninch="<<inch;
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