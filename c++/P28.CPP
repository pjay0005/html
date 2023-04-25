#include<iostream.h>
#include<conio.h>
int sum(int n)
{
	int i,r,sum=0;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n,c;
	clrscr();
	cout<<"enter n=";
	cin>>n;
	c=sum(n);
	cout<<"sum="<<c;
	getch();
	return 0;
}