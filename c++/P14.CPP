#include<iostream>
#include<math.h>
int main()
{
	float n,a;
	cout<<"Enter n=";
	cin>>n;
       //	without function use
       //	a=pow(n,1.0/2.0);
       //	using function
	a=sqrt(n);
	cout<<a;
	return 0;
}