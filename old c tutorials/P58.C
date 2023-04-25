#include<iostream.h>
#include<conio.h>
class date
{
	public:
	int day,year,month;
	void getdata()
	{
		cout<<"day=";
		cin>>day;
	}
	friend void putdata(date a);
};
class time
{
	public:
	int sec,hrs,min;
	void getdata()
	{
		cout<<"sec=";
		cin>>sec;
	}
	friend void putdata(time b);
};
void putdata(date a,time b)
{
	int year,month,day,sec,hrs,min;
	a.year=a.day/365;
	a.day=a.day%365;
	a.month=a.day/30;
	a.day=a.day%30;

	b.hrs=b.sec/3600;
	b.sec=b.sec%3600;
	b.min=b.sec/60;
	b.sec=b.sec%60;

	cout<<"year="<<year<<endl;
	cout<<"month="<<month<<endl;
	cout<<"day="<<day<<endl;
	cout<<"hrs="<<hrs<<endl;
	cout<<"min="<<min<<endl;
	cout<<"sec="<<sec<<endl;
}
int main()
{
	date p1;
	time p2;
	clrscr();
	p1.getdata();
	p2.getdata();
	putdata(p1,p2);
	getch();
	return 0;
}