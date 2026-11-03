#include<stdio.h>
int main ( )
{
	int conversion;
	float x;
	printf("enter the data");
	scanf("%f", &x);
	printf("\n enter the conversion type \n");
	printf("1. Kilometer to meter\n");
	printf("2. Meter to centimeter\n");
	printf("3.celcius to fahrenheit\n");
	printf("4.kilogram to gram\n");
	printf("5.Hours to minute\n");
	scanf("%d", & conversion);
	switch(conversion)
	{
		case 1:
		printf("The meter is %f", x*1000);
		break;
		case 2:
		printf("The centimeter is %f", x*100);
		break;
		case 3:
		printf("The fahrenheit is %f",(1.8*x)+32);
		break ;
		case 4:
		printf("The gram is %f", x*1000);
		break ;
		case 5:
		printf("The minutes is %f", x*60);
		break ;
		default :
		printf("Enter valid cinversion type");
	}
	return 0;
}