#include<stdio.h>
int  main()
{
	int num1,num2;
	printf("enter the num1 and num2\n");
	scanf("%d %d",&num1,&num2);
	printf("Before the swaping num1=%d,num2=%d\n",num1,num2);
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	printf("After the swaping num1=%d,num2=%d\n",num1,num2);

}
