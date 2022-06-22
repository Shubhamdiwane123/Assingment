//.... DMA using malloc.....
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	int *ptr;
	printf("enter the size how much elemnt you want to enter\n");
	scanf("%d",&n);
	ptr=(int*)malloc (n*sizeof(int));
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
}

