#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a, int b)
{
	return a/b;
}
int main()
{
	int a,b,result,choice;
	int (*fp[4])(int ,int)={add,sub,mul,div};
	fp[0]=add;
	fp[1]=sub;
	fp[2]=mul;
	fp[3]=div;
	printf("enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	printf("enter the choice: 0.add,1.substracton ,2.multiplication,3.division\n");
	scanf("%d",&choice);
	if(choice>3) return 0;
	result=((*fp[choice])(a,b));
	printf("The result =%d\n",result);
	return 0;
}
