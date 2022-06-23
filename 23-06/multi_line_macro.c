#include<stdio.h>
#define ELE 11,\
	    22,\
	    33,\
	    44
int main()
{
	int arr[]={ELE},i;
	printf("element of array are:\n");
	for(i=0;i<4;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

