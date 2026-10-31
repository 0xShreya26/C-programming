#include<stdio.h>
int main( )
{
	float x,y;
	printf("enter the cost price");
	scanf("%f", &x);
	printf("enter the selling price");
	scanf("%f", &y);
	if (y>x)
	{
		printf("the profit is %f", y-x);
	    printf("the profit percent is %f", ((y-x)/x)*100);
	}
    else
    { 
	printf("The loss is %f", x-y);
	printf("the loss percent is %f",((x-y)/x)*100);
    }
	return 0;
}