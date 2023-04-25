#include<iostream.h>
#include<conio.h>
class sample
{
	public:
	int a,b;
	void getdata()
	{
		cout<<"a=";
		cin>>a;
		cout<<"b=";
		cin>>b;
	}
	friend float mean(sample s);
};
float mean(sample s)
{
	return (s.a+s.b)/2;
}
int main()
{
	sample x;
	clrscr();
	x.getdata();
	cout<<mean(x);
	getch();
	return 0;
}