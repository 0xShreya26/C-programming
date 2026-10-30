#include<stdio.h>
int main( )
{
	int a,b,c;
	 printf("enter the number");
	 scanf("%d %d %d", &a, &b, &c);
	 if (a>0 && b>0 && c>0 && a+b>c && b+c>a && c+a>b)
	 printf("valid triangle");
	 else
	 printf("not valid");
	 return 0;
}