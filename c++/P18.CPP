#include<iostream.h>
#include<conio.h>
#include<math.h>
double power(double a,int b=2)
{
	double c;
	c=pow(a,b);
	return c;
}
int main()
{
	int n;
	double m,r;
	clrscr();
	cout<<"Enter m=";
	cin>>m;
	cout<<"Enter n=";
	cin>>n;
	n=power(m,n);
	cout<<"power="<<n<<endl;
	r=power(m);
	cout<<"Without power="<<r;
	getch();
	return 0;
}