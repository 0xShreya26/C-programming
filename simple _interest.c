#include<stdio.h>
int main( )
{
  float p;
  printf("enter the p:");
  scanf("%f",&p);
  float r;
  printf("enter the r:");
  scanf("%f",&r);
  float t;
  printf("enter the t:");
  scanf("%f",&t);
  float interest_rate;
  interest_rate=(p*r*t)/100.0;
  printf("the interest rate is %f",interest_rate); 
  return 0;
}