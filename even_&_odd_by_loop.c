#include<stdio.h>
int main( )
{
        int N = 1000;
        for(int i=0; i<=N; i++)
        {
        if(i%2==0)
        printf("%d,\n", i);
        }
        return 0;
}

#include<stdio.h>
int main( )
{
        int N = 1000;
        for(int i=0; i<=N; i++)
        {
        if(i%2!=0)
        printf("%d,\n", i);
        }
        return 0;
}