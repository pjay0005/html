#include<iostream.h>
#include<conio.h>
int main()
{
	int a=1,mul,i,n;
	clrscr();
	cout<<"enter n=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	cout<<a;
	getch();
	return 0;
}