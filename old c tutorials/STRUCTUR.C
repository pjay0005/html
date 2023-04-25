#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int rollno;
};
void main()
{
	char c;
	struct student *s;
	clrscr();
	//s=(struct student *s)malloc(sizeof(struct student));
	printf("enter name=");
	gets(s->name);
	printf("enter roll no=");
	scanf("%d",&s->rollno);
	printf("name=%s\n",s->name);
	printf("roll no=%d",s->rollno);
	getch();
}