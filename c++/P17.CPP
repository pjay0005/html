#include<iostream.h>
#include<conio.h>
int main()
{
	int n,i,j,a[10][10],b[10][10],c[10][10];
	clrscr();
	cout<<"Enter n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]";
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"b["<<i<<"]["<<j<<"]";
			cin>>b[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"  "<<c[i][j];
		}
		cout<<"\n";
	}
	getch();
	return 0;
}