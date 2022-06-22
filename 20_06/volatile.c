#include<stdio.h>
int main()
{
	volatile const static int a=10;
	int *p=&a;
	++*p;
	printf("%d\n",a);
}
