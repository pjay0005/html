#include<iostream.h>
#include<conio.h>
int main()
{
	int n,a=0,b=1,sum,i;
	clrscr();
	cout<<"enter n=";
	cin>>n;
	cout<<" "<<a;
	cout<<" "<<b;
	for(i=0;i<n;i++)
	{
		sum=a+b;
		cout<<" "<<sum;
		a=b;
		b=sum;
	}
	getch();
	return 0;
}