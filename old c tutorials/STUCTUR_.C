#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int rollno;
}s[20];
void main()
{
	int i,n;
	char c;
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	scanf("%c",&c);
	for(i=0;i<n;i++)
	{
		printf("enter name=");
		gets(s[i].name);
		printf("enter roll no=");
		scanf("%d",&s[i].rollno);
		scanf("%c",&c);
	}
	for(i=0;i<n;i++)
	{
		printf("name=%s\n",s[i].name);
		printf("roll no=%d\n",s[i].rollno);
	}
	getch();
}