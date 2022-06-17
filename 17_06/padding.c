#include <stdio.h>

#pragma pack(1)// if we use #pragma pack(1) then size of structure is 6 byte otherwise 12 byte

struct student{    
	int a;	
	int b;
	char c;
};

int main()
{    
    struct student s;
    printf("size of structure: %ld\n",sizeof(struct student));  
    printf("Address of char a: %p\n",&s.a);// it printing the address of variable it has continous memory
	printf("Address of int b: %p\n",&s.b);
	printf("Address of char c: %p\n",&s.c);
}
