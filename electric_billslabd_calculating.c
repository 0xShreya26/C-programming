#include<stdio.h>
int main ( )
{
	int x;
	printf("enter the unit slab");
	scanf("%d", &x);
	if(x<=100)
	printf("the amount is %d",x*5);
	else if(x<=200)
	printf("the amount is %d",x*7);
	else
	printf("the amount is %d",x*10);
	return 0;
}