#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,mul=1;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
	}
	printf("Ans=%d",mul);

	getch();
}