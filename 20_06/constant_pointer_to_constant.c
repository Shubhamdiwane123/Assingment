//CONSTANT POINTER TO CONSTANT
#include<stdio.h>
int main()
{
	int v1=10,v2=20;
	const int *const const_ptr_const=&v1;// p is constant pointer to constant

	printf("%d\n",*const_ptr_const);
	const_ptr_const=&v2;// not valid -p is constant
	*const_ptr_const=v1+v2;//not valid- *P is constant
	printf("%d\n",*const_ptr_const);
}
// in these- address and value both can not change
