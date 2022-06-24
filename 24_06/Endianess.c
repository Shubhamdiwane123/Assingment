#include<stdio.h>
int main()
{
	unsigned int x=0x12345678;
		char *c=(char*)&x;
	printf("*c= ox%x\n",*c);
	if(*c==0x78)
		printf("The machine is Little endian\n");
	else
		printf("The machine is Big endian\n");

}
