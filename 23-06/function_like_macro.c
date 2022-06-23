#include<stdio.h>
#define MAX(a,b) ((a) <(b))? b:a
int main()
{
	int a,b;
	printf("enter value of a and b\n");
	scanf("%d %d",&a,&b);
	printf("The maximum number is =%d\n",MAX(a,b));
}
