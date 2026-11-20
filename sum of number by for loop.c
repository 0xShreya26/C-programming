#include<stdio.h>
int main( )
{
int N = 100;
int sum = 0;;
for(int i=1; i<=N; i++)
sum = sum + i;
printf("  %d", sum);
return 0;
}