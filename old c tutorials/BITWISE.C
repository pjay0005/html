#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("~a=%d\n",~a);
	printf("~b=%d\n",~b);
	printf("a<<=%d\n",a<<1);
	printf("b<<=%d\n",b<<1);
	printf("a>>=%d\n",a>>1);
	printf("b>>=%d\n",b>>1);
	printf("a&b=%d\n",a&b);
	printf("a|b=%d\n",a|b);
	printf("a^b=%d\n",a^b);
	getch();
}