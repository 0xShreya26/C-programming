#include<stdio.h>
int main( )
{
int N = 100;
int sum = 0;;
for(int i=1; i<=N; i++)
sum = sum + i;
if(i%2!=0)
printf("  %d", sum);
return 0;
}