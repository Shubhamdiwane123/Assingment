//POINTER TO CONSTANT
#include<stdio.h>
int main()
{
	int v1=10,v2=20;
	const int *ptr_const=&v1;// p is a pointer to constant 
	ptr_const=&v2;// valid - address store in p is change.
//	*p_const=v1+v2;// not valid because *p is constant  data is not change.

	printf("%d\n",*ptr_const);//20
	ptr_const=&v1;//valid - address is change
	printf("%d",*ptr_const);//10
}
// in these - address can be change
//            value can not change
