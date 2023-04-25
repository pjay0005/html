// ATM program with parameter with function

#include<stdio.h>
#include<conio.h>
int balance();
int deposit(int c);
int withdraw(int d);
void main()
{
	int c,d,total;
	clrscr();
	c=balance();
	printf("ave.balance=%d\n",c);
	d=deposit(c);
	printf("deposit balance=%d\n",d);
	total=withdraw(d);
	printf("total balance=%d\n",total);
	getch();
}
int balance()
{
	int balance;
	printf("enter balance=");
	scanf("%d",&balance);
	return balance;
}
int deposit(int c)
{
	int deposit,depositbalance;
	printf("enter deposit=");
	scanf("%d",&deposit);
	depositbalance=c+deposit;
	return depositbalance;
}
int withdraw(int d)
{
	int withdraw,total;
	printf("enter withdraw=");
	scanf("%d",&withdraw);
	total=d-withdraw;
	return total;
}