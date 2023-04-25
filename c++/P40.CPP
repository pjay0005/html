#include<iostream.h>
#include<conio.h>
class emp//class name
{
	public:
	char name[10],depart[10];
	int num,salary;
	void getdata()
	{
		cout<<"enter id number=";
		cin>>num;
		cout<<"enter employe name=";
		cin>>name;
		cout<<"enter department=";
		cin>>depart;
		cout<<"enter salary=";
		cin>>salary;
	}
	void putdata()
	{
		cout<<"-------------------------"<<endl;
		cout<<"\employe number="<<num<<endl;
		cout<<"employe name="<<name<<endl;
		cout<<"department name="<<depart<<endl;
		cout<<"employe salary="<<salary<<endl;
		cout<<"-------------------------"<<endl;
	}
};
int main()
{
	emp s,s1;
	clrscr();
	s.getdata();
	s1.getdata();
	s.putdata();
	s1.putdata();
	getch();
	return 0;
}