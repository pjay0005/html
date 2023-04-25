#include<stdio.h>
#include<conio.h>
void main()
{
       int n,n1,n2,n3,n4,n5,sum;
       clrscr();
       printf("enter a value of n=");
       scanf("%ld",&n);
       n1=n%10;
       n=n/10;
       n2=n%10;
       n=n/10;
       n3=n%10;
       n=n/10;
       n4=n%10;
       n=n/10;
       n5=n%10;
       sum=n1+n2+n3+n4+n5;
       printf("sum of 5 digit=%ld",sum);
       getch();
}