#include<iostream>
using namespace std;
class dis;
class length
{
	public:
	int meter;
	void getdata()
	{
		cout<<"meter=";
		cin>>meter;
	}
	friend void putdata(length A);
};
class dis
{
	public:
	int meter;
	void getdata()
	{
		cout<<"meter=";
		cin>>meter;
	}
	friend void putdata(dis B);
};
void putdata(length A,dis B)
{
	int meter1,km;
	meter1=A.meter+B.meter;
	km=meter1/1000;
	meter1=meter1%1000;
	cout<<"km="<<km<<endl;
	cout<<"meter="<<meter1;
}
int main()
{
	length p1;
	dis p2;
	p1.getdata();
	p2.getdata();
	putdata(p1,p2);
	return 0;
}