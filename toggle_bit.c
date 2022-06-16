#include<stdio.h>
int main()
{
	int data,bit,pos;
	printf("enter the number\n");
	scanf("%d",&data);
	printf("before toggle bit:\n");
	for(bit=31;bit>=0;bit--)//it print the binary of data
		printf("%d ",((data>>bit)&1));
	printf("\n");

	printf("enter the position which bit you want to toggle\n");
	scanf("%d",&pos);
	data=data^(1<<pos);// it toggle the bit
	printf("after toggle  bit:\n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",((data>>bit)&1));
	printf("\n");
	printf("after toggle the bit the data=%d\n",data);
}
