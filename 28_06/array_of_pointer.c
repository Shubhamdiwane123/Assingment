#include<stdio.h>
int main()
{
	int *arr[5];//arr is array of pointer
	int b[5]={11,22,33,44,55},i;
	for(i=0;i<5;i++)
		arr[i]=&b[i];
	for(i=0;i<5;i++)
		printf("%d ",*arr[i]);
}

