#include<stdio.h>
int main()
{
    int n,i,j;

    scanf("%d",&n);

    if(n%2==0)
        n=n-1;

    for(i=0;i<(n)+1;i++)
    {
        for(j=0; j<n; j++)
        {
            if(j==n/(2+i*i))
            {
                printf("*");
            }
            else
                printf("_");
        }
        printf("\n");
    }







}
