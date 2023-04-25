#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,a[100],ase;
	clrscr();
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				ase=a[i];
				a[i]=a[j];
				a[j]=ase;
			}
		}
	}
	for(i=0;i<n;i++)
	{

		printf("a[%d]=%d\n",i,a[i]);
	}
	getch();
}