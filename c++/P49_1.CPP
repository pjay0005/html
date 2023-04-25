#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int rollno,eng,guj,ss,sum;
	float per;
	char name[20];
	void get()
	{
		cout<<"enter roll no=";
		cin>>rollno;
		cout<<"enter name=";
		cin>>name;
		cout<<"english=";
		cin>>eng;
		cout<<"gujarati=";
		cin>>guj;
		cout<<"Ss=";
		cin>>ss;
	}
	void result()
	{
		sum=eng+guj+ss;
		per=sum/3;
	}
	void put()
	{
		cout<<"----------------"<<endl;
		cout<<"roll num="<<rollno<<endl;
		cout<<"name="<<name<<endl;
		cout<<"total="<<sum<<endl;
		cout<<"per="<<per<<endl;
		cout<<"-----------------"<<endl;
	}
};
int main()
{

   int i,n;
   clrscr();
   student s[20];
   cout<<"enter n: ";
   cin>>n;
   for(i=0; i<n; i++)
   {
       s[i].get();
   }
   for(i=0;i<n;i++)
   {
	s[i].result();
   }
   for(i=0; i<n; i++)
   {
	s[i].put();
   }
   getch();
   return 0;
}