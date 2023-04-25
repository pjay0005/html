#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	FILE *fp, *fp1;
	clrscr();
	fp=fopen("FILE1.txt","r");
	fp1=fopen("FILE3.txt","w");
	c=fgetc(fp);
	while(c!=EOF)
	{
		putc(c,fp1);
		c=getc(fp);
	}
	fclose(fp1);
	fclose(fp);
	printf("File is Copy");
	getch();
}