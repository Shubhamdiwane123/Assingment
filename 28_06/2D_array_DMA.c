#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r,c,i,j;
	printf("enter the number of row and coloumn\n");
	scanf("%d %d",&r,&c);
	int **a;
	a=(int **) malloc(r*sizeof(int));
	for(i=0;i<r;i++)
		a[i]=(int*)malloc(c*sizeof(int));
	printf("enter %d the element\n",(r*c));
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<r;i++)
		free(a[i]);
	free(a);


}
