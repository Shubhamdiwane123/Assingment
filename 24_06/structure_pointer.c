#include<stdio.h>
struct student
{
	int a,b;
};
int main()
{
	struct student v1={11,22};
	printf("a=%d b=%d\n",v1.a,v1.b);
	struct student *v2=&v1;//v2 is pointer to stucture
	v2->a=44;
	v2->b=32;
	printf("a=%d b=%d\n",v2->a,v2->b);

}
