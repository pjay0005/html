#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50],b[50],c[50];
    int i,l1=0,l2=0;

    printf("Enter name-");
    gets(a);

    printf("Enter name-");
    gets(b);

    for (i=0; a[i]!='\0'; i++)
    {
        l1++;
    }
    for (i=0; b[i]!='\0'; i++)
    {
        l2++;
    }
    for (i=0; i<=l2; i++)
    {
        a[l1+i]=b[i];
    }
    puts(a);
   // printf ("%s",a);

    return 0;
}