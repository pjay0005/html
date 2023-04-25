#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,n1,n0,r,arm;
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		n0=i;
		n1=i;
		arm=0;
		while(n0>0)
		{
			r=n0%10;
			arm=arm+(r*r*r);
			n0=n0/10;
		}

		if(n1==arm)
		{
			printf("%d\n",arm);
		}
	}
	getch();
}