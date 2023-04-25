#include<iostream.h>
#include<conio.h>
class record//class name
{
	public:
	char name[10],course[10];
	int enrol,sub1,sub2,sub3,t,p;
	void getdata()
	{
		cout<<"enter enrollment no = ";
		cin>>enrol;
		cout<<"enter student name  = ";
		cin>>name;
		cout<<"enter course name   = ";
		cin>>course;
		cout<<"enter sub1 marks    = ";
		cin>>sub1;
		cout<<"enter sub2 marks    = ";
		cin>>sub2;
		cout<<"enter sub3 marks    = ";
		cin>>sub3;
	}
	void total()
	{
		t=sub1+sub2+sub3;
		p=t/3;
	}
	void putdata()
	{
		cout<<"-------------------------"<<endl;
		cout<<"total               = "<<t<<endl;
		cout<<"per                 = "<<p<<endl;
		cout<<"-------------------------"<<endl;
	}
};
int main()
{
	record s,s1;
	clrscr();
	s.getdata();
       //	s1.getdata();
       s.total();
	s.putdata();
       //	s1.putdata();
	getch();
	return 0;
}