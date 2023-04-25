#include<iostream.h>
#include<string.h>
#include<conio.h>
class student//class name
{
	public:
	char name[10];
	int roll;
	void getdata()
	{
		cout<<"enter name=";
		cin>>name;
		cout<<"enter roll no=";
		cin>>roll;
	}
	void putdata()
	{
		cout<<"-------------------------"<<endl;
		cout<<"\nstudent name="<<name<<endl;
		cout<<"student roll no="<<roll<<endl;
		cout<<"-------------------------"<<endl;
	}
};
int main()
{
	student s,s1;
	clrscr();
	s.getdata();
	s1.getdata();
	s.putdata();
	s1.putdata();
	getch();
	return 0;
}