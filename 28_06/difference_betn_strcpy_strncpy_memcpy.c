#include<stdio.h>
#include<string.h>
#define SIZE 10
int main()
{
	char s1[SIZE]="qwer\0ty",str[SIZE],str1[SIZE],str2[SIZE];
	s1[7]='A';
	int i;
	printf("string s1: ");
	puts(s1);
	strcpy(str2,s1);
	printf("string str2: ");
	puts(str2);
	strncpy(str,s1,8);
	printf("string str: ");
	puts(str);
	memcpy(str1,s1,8);
	printf("string str1: ");
	puts(str1);
	printf("strncpy string : ");

	for(i=0;i<8;i++)
		printf("%d=%c, ",i,str[i]);
	printf("\n It copy the element up to NUll\n");
	printf("\n memcpy string: ");

	for(i=0;i<8;i++)
		printf("%d=%c,",i,str1[i]);
	printf("\n it copy the all element including NULL also\n");
	printf("\nstrcpy string: ");
	for(i=0;i<8;i++)
		printf("%d=%c,",i,str2[i]);
	printf("\nit copy the element up to NULL\n");

}
