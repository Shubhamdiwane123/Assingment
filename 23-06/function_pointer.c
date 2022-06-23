#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int (*fp)(int ,int);
	fp=add;
	int result,a,b;
	printf("enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	result=fp(a,b);
	printf("The addition of %d and %d by function pointer is = %d\n",a,b,result);
}
