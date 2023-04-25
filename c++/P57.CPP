#include<iostream.h>
#include<conio.h>
class DB;
class DM
{
	public:
	int meter,cm;
	void getdata()
	{
		cout<<"meter=";
		cin>>meter;
		cout<<"cm=";
		cin>>cm;
	}
	friend void add(DM dm,DB db);
};
class DB
{
	public:
	int feet,inch;
	void getdata()
	{
		cout<<"feet=";
		cin>>feet;
		cout<<"inch=";
		cin>>inch;
	}
	friend void add(DM dm,DB db);
};
void add(DM dm,DB db)
{
	float meter1,cm1;
	meter1=dm.meter+(db.feet/3.28);
	cm1=dm.cm+(db.inch*2.54);
	cout<<meter1<<endl;
	cout<<cm1;
}
int main()
{
	DM p1;
	DB p2;
	clrscr();
	p1.getdata();
	p2.getdata();
	add(p1,p2);
	getch();
	return 0;
}