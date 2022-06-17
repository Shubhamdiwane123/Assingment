#include<stdio.h>
#define SIZE 100
int copy(int arr1[],int arr2[],int n);
int main()
{
	int arr1[SIZE],arr2[SIZE],n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the %d element in arr1\n",n);
	for(i=0;i<n;i++)// for taking input
		scanf("%d",&arr1[i]);

	copy(arr1,arr2,n);// calling copy function

}
int copy(int arr1[],int arr2[],int n)
{ 
	int i;
        for(i=0;i<n;i++)// it copy the element from arr1 to arr2
		arr2[i]=arr1[i];
	printf("\narr2:\n");
	for(i=0;i<n;i++)// it print the arr2
		printf("%d ",arr2[i]);
}

