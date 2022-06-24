#include<stdio.h>
struct student
{
	int a;// we can not intialized member here
	char c;// memory is not allocated for that 
	float d;
};
int main()
{
	struct student v1;// here we allocate memory for structure 
	v1.a=5;
	v1.c='A';
	v1.d=3.12;
	printf("The data is :\n");
	printf("a=%d,c=%c,d=%f\n",v1.a,v1.c,v1.d);
}
