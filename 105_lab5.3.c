#include<stdio.h>
int main()
{
    int a,b,n,i,j,A[1000];

    A[0]=1;
    for(i=2;i<20;i++)
    {
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
                break;

            if(i==1)
            {
                A[i-1]=i;
            }


        }

    }

    for(i=0;i=;)







}
