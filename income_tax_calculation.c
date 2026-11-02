#include<stdio.h>
int main ( )
{
	float x;
	printf("enter the income slab");
	scanf("%f", &x);
	if(x<=400000)
	printf("the income tax amount is %f",0.00);
	else if(x<=800000)
	printf("the income tax amount is %f",(x-400000)*0.05);
	else if(x<=1200000)
	printf("the income tax amount is %f",20000+(x-800000)*0.10);
	else 
	printf("the income tax amount is %f",60000+(x-1200000)*0.15);
     return 0;
}