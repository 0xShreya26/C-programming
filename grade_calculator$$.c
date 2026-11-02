#include<stdio.h>
int main( )
{
int grade;
int x,y,z,a,b;
printf("enter five sub marks");
scanf("%d %d %d %d %d",&x,&y,&z,&a,&b);
grade = (x+y+z+a+b)/5;
printf("the grade is %d",(x+y+z+a+b)/5);
switch(grade/10)  
{  
	case 10: 
	case 9: 
	{  
	if(grade>=90)  
	printf("A+");  
	break;  
	}  
	case 8:  
	{  
	if(grade>80)  
	printf("A");  
	break;  
	}  
	case 7:  
	{  
	if(grade>=70)  
	printf("B");  
	break;  
	}  
	case 6:  
	{  
	if(grade>=60)  
	printf("C");  
	break;  
	}  
	case 5:  
	{  
	if(grade>=50)  
	printf("B");  
	break;  
	}  
	case 4:  
	{  
	if(grade<=49)  
	printf("FAIL");  
	break;  
	}  
	default:  
	printf("enter valid percent");  
}  
return 0;

}