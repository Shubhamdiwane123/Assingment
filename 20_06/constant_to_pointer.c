//CONSTANT TO POINTER
#include<stdio.h>
int main()
{
	int v1=10,v2=20;
	int  *const const_ptr=&v1;// p is constant to pointer 
	
	printf("%d\n",*const_ptr);
//	const_ptr=&v2;// not valid- because p is constant address is not change
	*const_ptr=v1+v2;// valid - *p is value is change
	printf("%d\n",*const_ptr);
}
// we know p-store address
// *p -getting value
// in these - address can not change 
//            value can be change

