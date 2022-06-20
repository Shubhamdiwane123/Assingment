#include<stdio.h>
int fact(int n)
{
	if(n==0)
		return 1;
	return(n*fact(n-1));
}
int main()
{
	int n,f=0;
	printf("enter the number\n");
	scanf("%d",&n);

	f=fact(n);
	printf("factorial of number %d is =%d\n",n,f);
}
