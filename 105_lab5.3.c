#include<stdio.h>
int main()
{
    int a,b,n,i,j,A[1000];

    scanf("%d",&a);
    A[0]=1;
    for(i=2;i<20;i++)
    {   b=0;
        while (i!=1)
        {
            if (i%5 == 0)
            {
                i=i/5;
            }
            else if(i%3 == 0)
            {
                i=i/3;
            }
            else if(i%2 == 0)
            {
                i=i/2;
            }
            else
            b=1;
        }
        if(b==0)
            A[i]=i;

    }

    for(i=0;i<20;i++)
      printf("%d",A[i]);







}
