#include<stdio.h>
int main ( )
{
	int x;
	printf("enter year.");
	scanf("%d",&x);
	{
		if(x%4==0)
		printf("  yes it is leap year%d",x);
		else
		printf(" no bro , not leap year");
		return 0;
	}
}
	