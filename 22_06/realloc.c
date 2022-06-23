//.......DMA using realloc...........
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,N,i;
	int *ptr;
	printf("enter the size how much element you want to store\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory is not allocated\n");
		return 0;
	}
	printf("memory is allocated \nenter the %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&ptr[i]);
	for(i=0;i<n;i++)
		printf("%d ",ptr[i]);
	printf("\n");

	printf("enter the new size \n");
	scanf("%d",&N);
	ptr=(int*)realloc((int*)ptr,N);
	if(ptr==NULL)
	{
		printf("memory is not allocated\n");
		return 0;
	}
	else
	{
	printf("memory allocated by realloc \n");
	if(N>n)
		printf("enter %d element\n",N-n);
	for(i=n;i<N;i++)
		scanf("%d",&ptr[i]);
	for(i=0;i<N;i++)
		printf("%d ",ptr[i]);
	printf("\n");
	}
	free(ptr);
}
