#include<stdio.h>
int main( )
{
	int x;
	 printf("enter the number");
	 scanf("%d", &x);
	 if ( x%5==0 && x%11==0)
	 printf("yes divisible by 5 and 11");
	 else
	 printf("not divisible by 5 and 11");
	 return 0;
}