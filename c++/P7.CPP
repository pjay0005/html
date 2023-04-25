#include<iostream.h>
#include<conio.h>
int main()
{
	int i,n,sum=0;
	clrscr();
	cout<<"enter n=";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<i<<"\n";
			sum=sum+i;
		}
	}
	cout<<"sum="<<sum;
	getch();
	return 0;
}