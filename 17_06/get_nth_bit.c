#include<stdio.h>
int main()
{
	int bit,data,n,BIT;
	printf("enter the data\n");
	scanf("%d",&data);
	printf("Binary of the data is :\n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",((data>>bit)&1));
	printf("\n");
	printf("enter the positon which bit you want to check\n");
	scanf("%d",&n);
	BIT=(data>>n)&1;
	printf("The %d bit is set to %d\n",n,BIT);

}
