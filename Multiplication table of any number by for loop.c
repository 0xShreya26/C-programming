#include<stdio.h>
int main( )
{
int x,N;
printf("enter the number of which table you want\n");
scanf("%d", &x);
printf("enter the times of multiplication\n");
scanf("%d", &N);
for(int i=1; i<=N; i++)
printf("  %d\n", x*i);
return 0;
}
