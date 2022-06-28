#include<stdio.h>
int main()
{
	int (*arr)[5],i;//arr is a pointer to array
	int b[5]={11,22,33,44,55};
	arr=&b;
	for(i=0;i<5;i++)
		printf("%d ",*(*arr+i));
	printf("\n");
}

