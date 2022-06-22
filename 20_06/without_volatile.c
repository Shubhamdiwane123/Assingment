#include<stdio.h>
int main()
{
	const static int a=10;
	int *p=&a;
	++*p;
	printf("%d\n",a);// we getting segmentation fault
}
