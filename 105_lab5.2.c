#include<stdio.h>
int main()
{
    int n,i,j,n2;

    scanf("%d",&n);
    n2=n;
    if(n%2==0)
        n=n-1;

    for(i=0;i<n2;i++)
    {
        for(j=0; j<n; j++)
        {
            if(j==(n/2)-i)
            {
                printf("*");
            }
            else if(j==(n/2)+i)
            {
                printf("*");
            }
            else
                printf("_");
        }
        printf("\n");
    }







}
