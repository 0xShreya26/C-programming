#include<stdio.h>
int main ( )
{
	int x;
	printf("enter your data");
	scanf("%d", &x);
	if(x%2==0)
	printf("%d, is even", x);
	return 0;
}