#include<stdio.h>
#include<conio.h>
void main()
{
	char c[100];
	FILE*fp;
	clrscr();
	fp=fopen("FILE2.txt","w");
	printf("Enter string=");
	scanf("%s",&c);
	fputc(c,fp);
	fclose(fp);
	getch();
}