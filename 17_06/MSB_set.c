#include<stdio.h>
int main()
{
	int data,bit,MSB;
	printf("enter the data\n");
	scanf("%d",&data);
	printf("Binary of given data is:\n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",((data>>bit)&1));
	printf("\n");
	MSB=1<<31;
	if(data&MSB)
		printf("MSB is set\n");
	else
		printf("MSB is not set\n");

}
