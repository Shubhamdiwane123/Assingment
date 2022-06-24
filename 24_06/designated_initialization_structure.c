#include<stdio.h>
struct student
{
	int a;
	char c;
	float f;
};
int main()
{
	struct student v1={.f=2.2,.c='d',.a=33};//Designated Initialization allows structure members to be initialized in any order
	printf("a=%d ,c= %c ,f=%f\n",v1.a,v1.c,v1.f);
	struct student v2={.c='s',.f=44.4,.a=55};
       	printf("a=%d ,c= %c ,f=%f\n",v2.a,v2.c,v2.f);
	
}
