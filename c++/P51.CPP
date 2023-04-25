#include<iostream.h>
#include<conio.h>
class factorial//class name
{
	public:
	int n;
	void getdata();
	void putdata();
};
void factorial::getdata()
{
	int n;
	cout<<"enter n=";
	cin>>n;
}
void factorial::putdata()
{
	int a=1,i,n;
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	cout<<a<<endl;
}
int main()
{
	factorial f;
	clrscr();
	f.getdata();
	f.putdata();
	getch();
	return 0;
}