#include<stdio.h>
int main()
{
	float PI=3.14,a,c,r;
	printf("enter the radius of the circle\n");
	scanf("%f",&r);
	a=PI*r*r;
	printf("The area of the circle =%f\n",a);
	c=2*PI*r;
	printf("The circumference of circle =%f\n",c);
}
