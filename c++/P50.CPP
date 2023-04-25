#include<iostream.h>
#include<conio.h>
class market//class name
{
	public:
	int no,price;
	char name[20];
	void getdata();
	void putdata()
	{
		cout<<"name="<<name<<endl;
		cout<<"sr.no="<<no<<endl;
		cout<<"price="<<price<<endl;
	}
};
void market::getdata()//outside of class
{
	cout<<"enter name = ";
	cin>>name;
	cout<<"enter no = ";
	cin>>no;
	cout<<"enter price = ";
	cin>>price;
}
int main()
{
	market c;
	clrscr();
	c.getdata();
	c.putdata();
	getch();
	return 0;
}