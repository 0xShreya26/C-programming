#include<stdio.h>
int main( )
{
	int x;
	printf("enetr the number");
	scanf("%d", &x);
	if (x<0)
	x=-x;
	printf("the absolute number is %d", x);
	return 0;
}