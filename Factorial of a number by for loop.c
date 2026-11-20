#include<stdio.h>
int main( )
{
int N;
int x=1;
printf ("enter the factorial no:");
scanf("%d", &N);
for(int i=N; i>=1; i--)
x = x*i;
printf("  %d", x);
return 0;
}