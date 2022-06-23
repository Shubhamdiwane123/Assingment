#include<stdio.h>
#include<stdlib.h>
struct class
{
	int marks;
	char sub[20];
};
int main()
{
	int i,n;
	struct class *ptr;
	printf("enter the no of record you want to store\n");
	scanf("%d",&n);
	ptr=(struct class*)malloc(n*sizeof(struct class));
	if(ptr==NULL)
	{
		printf("memory is not allocated\n");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		printf("enter the subject and marks\n");
		scanf("%s %d",(ptr+i)->sub,&(ptr+i)->marks);
	}
	for(i=0;i<n;i++)
		printf("subject= %s  marks= %d\n",(ptr+i)->sub,(ptr+i)->marks);
}
