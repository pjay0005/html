#include <stdio.h>
int main ()
{
    int a[100][100],b[100][100],c[100][100],n,i,j,sum;

    printf ("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf ("%d",&a[i][j]);
            
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf ("%d",&b[i][j]);
            
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("%d ",c[i][j]);
        }
        printf ("\n");
    }
}