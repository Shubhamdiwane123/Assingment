#include<stdio.h>
int x;// global variable by default is extern
static int g=10;// global static
void autoclass()
{
	printf("auto class:\n");
	auto int a=32;
	printf("value of auto a is =%d\n\n",a);
	printf("in auto class function we print the extern x=%d\n",x);
}
void registerclass()
{
	printf("register class:\n");
	register char b='A';
	printf("value of register b is =%c\n\n",b);
//	printf("value of auto a is =%d\n",a);// is getting error because scope of auto in function only
}
void externclass()
{
	printf("extern class:\n");
	printf("value of extern x is =%d\n\n",x);
	x=2;
	printf("modified extern x value is =%d\n\n",x);
}
void staticclass()
{
	int i=0;
	printf("static class:\n");
	for(i=1;i<5;i++)
	{
		 static int y=5;
		int p=10;
		y++;
		p++;
		printf("the value of local  static y =%d\n the value of non-static p =%d\n",y,p);
		printf("the value of global static g=%d\n\n",g);// global static scope with in  the file only
	}
	 printf("in static class function we print and access the extern x=%d\n",x);

}
int main()
{
	printf("ALL STORAGE CLASSES \n");

	autoclass();
	registerclass();
	externclass();
	staticclass();
}
