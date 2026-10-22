#include<stdio.h>
int main ( )
{
	int x;
	printf("enter no.");
	scanf("%d",&x);
	{
		if(x>0)
		printf("positive",x);
		else if (x<0)
		printf("negative",x);
		else
		printf("equal to zero",x);
		return 0;
	}
}
	