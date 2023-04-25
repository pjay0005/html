#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,a=1,b=6,c=13,d=16,e=17,f=20,g=23,h=24;
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0)
			{
				printf("%3d",a++);
			}
			else if(j==n-1)
			{
				printf("%3d",b++);
			}
			else if(i==n-1)
			{
				printf("%3d",c--);
			}
			else if(j==0)
			{
				printf("%3d",d--);
			}
			else if(i==1)
			{
				printf("%3d",e++);
			}
			else if(j==n-2)
			{
				printf("%3d",f++);
			}
			else if(i==3)
			{
				printf("%3d",g--);
			}
			else if(i==2)
			{
				printf("%3d",h++);
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}

	getch();
}