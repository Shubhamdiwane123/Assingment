#include<stdio.h>
#define SIZE 4
int swap(int *a1,int *a2)
{
	int *const ptr1 =a1;
	int *const ptr2 =a2;
	int i=0;
	while(i<4)
	{
		*(ptr1+i)=(*(ptr1+i) * *(ptr2+i))/(*(ptr2+i)=*(ptr1+i));
		i++;
	}
	return 0;
}
int main(void)
{
	int a1[SIZE]={111,22,33,44},a2[SIZE]={55,66,77,88},i;

	int (*fptr)(int *,int*);
	fptr=swap;
	printf("before the swap\n");
	printf("array 1 element\n");
	for(i=0;i<SIZE;i++)
		printf("%4d ",a1[i]);
	printf("\narray 2 element\n");
	for(i=0;i<SIZE;i++)
		printf("%4d ",a2[i]);
	fptr(a1,a2);
	printf("\n afterswap\n");
	printf("array 1 elements\n");
	for(i=0;i<SIZE;i++)
		printf("%d ",a1[i]);
	printf("\narray 2 elements\n");
	for(i=0;i<SIZE;i++)
		printf("%d ",a2[i]);
}
