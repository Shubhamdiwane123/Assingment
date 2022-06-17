#include<stdio.h>
int main()
{
	int data,bit,i;
	printf("enter the data\n");
	scanf("%d",&data);
	printf("The binary of the data is :\n");
	for(bit=31;bit>=0;bit--)//it print the binary of data
		printf("%d ",((data>>bit)&1));
	printf("\n");
	if(data&1)// it check lsb set or not
		printf("LSB is set\n");
	else 
		printf("LSB is not set\n");
}
