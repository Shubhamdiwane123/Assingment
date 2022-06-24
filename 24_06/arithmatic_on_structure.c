#include<stdio.h>
struct class
{
	int a,b;
};
int main()
{
	struct class v1={11,22};
	printf("before arithmatic a=%d b=%d\n",v1.a,v1.b);
	v1.a=v1.a+v1.b;// addition of two structure member
	printf("after arithmatic a=%d b=%d\n",v1.a,v1.b);
}
