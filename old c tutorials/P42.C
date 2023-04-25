#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,f=0;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		f=1;
		break;
		}
	}
	if(f==0)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is not prime");
	}
	getch();
}