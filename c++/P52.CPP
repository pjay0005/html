#include<iostream.h>
#include<conio.h>
class rev//class name
{
	public:
	int n,rev,r;
	void getdata();
	void calculate();
	void putdata();
};
void rev::getdata()//outside of class
{
	cout<<"enter number=";
	cin>>n;
}
void rev::calculate()//outside of class
{
	rev=0;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
}
void rev::putdata()//outside of class
{
	cout<<"rev="<<rev;
}
int main()
{
	rev r;
	clrscr();
	r.getdata();
	r.calculate();
	r.putdata();
	getch();
	return 0;
}