#include<stdio.h>
#define SIZE 50
void *my_memcpy(void *s1,const void *s2,int n);
int main()
{
	char s1[SIZE],s2[SIZE],*p;
	int n;
	printf("enter the string1:");
	gets(s1);
	printf("enter the string22:");
	gets(s2);

	printf("enter the value of n:");
	scanf("%d",&n);

	p=my_memcpy(s1,s2,n);
	puts(s1);
	puts(s2);
}
void *my_memcpy(void *s1,const void *s2,int n)
{
	int i;
	char *p=s1;
	char *q=s2;
	for(i=0;i<n;i++)
		p[i]=q[i];
	return p;
}
