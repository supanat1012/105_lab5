#include<stdio.h>
int main()
{
    int a,b,n=2,i,j,A[1000],x,m;


    for(i=0;i<20;)
    {
        m=n;
       while (n!=1)
       {
            if (n%5==0)
            {
                n=n/5;
            }
            else if (n%3==0)
            {
                n=n/3;
            }
            else if (n%2==0)
            {
                n=n/2;
            }
            else
            {
                x=1;
                break;
            }
            if(n=1)
               {
                  A[i]=m;
                  i++;
               }

        }
       n=n+1;

    }

    for(i=0;i<20;i++)
    {
        printf("%d ",A[i]);
    }

}
