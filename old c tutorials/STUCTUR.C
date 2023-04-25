#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int rollno;
}s;
void main()
{
	clrscr();
	printf("enter name=");
	gets(s.name);
	printf("enter roll no=");
	scanf("%d",&s.rollno);
	printf("name=%s\n",s.name);
	printf("roll no=%d",s.rollno);
	getch();
}