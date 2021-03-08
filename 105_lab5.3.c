#include<stdio.h>
int main()
{
    int n,i,A[1000],m,c=2,a;

    A[0]=1;
    for(i=1;i<1000;)
    {
        n=c;
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
                break;
            }
            if(n==1)
               {
                  A[i]=m;
                  i++;
               }
        }
       c++;

    }

    /*for(i=0;i<100;i++)
    {
        printf("%d ",A[i]);
    }*/

    scanf("%d",&a);

    printf("%d",A[a-1]);
}
