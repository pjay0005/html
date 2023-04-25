#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	FILE*fp;
	clrscr();
	fp=fopen("FILE1.txt","r");
	c=fgetc(fp);
	while(c!=EOF)
	{
		printf("%c",c);
		c=fgetc(fp);
	}
	fclose(fp);
	getch();
}