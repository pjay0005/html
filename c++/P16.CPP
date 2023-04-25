#include<iostream.h>
#include<conio.h>
int main()
{
	int english,hindi,ss,sum=0,per;
	clrscr();
	cout<<"English=";
	cin>>english;
	cout<<"Hindi=";
	cin>>hindi;
	cout<<"Ss=";
	cin>>ss;
	sum=english+hindi+ss;
	per=sum/3;
       //	cout<<"\nTotal=""\nPercentage="<<sum<<avg;
       //	cout<<"Total="<<sum;
       //	cout<<"Percentage="<<per;
	cout<<"Total="<<sum<<endl<<"Percentage="<<per;
	getch();
	return 0;
}