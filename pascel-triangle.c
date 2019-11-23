#include<stdio.h>
int main()
{
    int i,j,n;

    for(i=0;i<5;i++)
    {
        for(j=0;j<(5-i);j++)
        {
            printf(" ");
        }
        n=1;
        for(j=0;j<=i;j++)
        {
            printf("%d ",n);
            n = n*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
