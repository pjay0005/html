#include<iostream>
using namespace std;
class dis;
class length
{
	public:
	int inch;
	void getdata()
	{
		cout<<"inch=";
		cin>>inch;
	}
	friend void putdata(length A);
};
class dis
{
	public:
	int inch;
	void getdata()
	{
		cout<<"inch=";
		cin>>inch;
	}
	friend void putdata(dis B);
};
void putdata(length A,dis B)
{
	int inch1,feet;
	inch1=A.inch+B.inch;
	feet=inch1/12;
	inch1=inch1%12;
	cout<<"feet="<<feet<<endl;
	cout<<"inch="<<inch1;
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