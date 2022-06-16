#include <stdio.h>
#define M 2
#define N 2
 
void assign(int arr[M][N])        
{
    for (int i = 0; i < M; i++)
    {
	    printf("enter the element\n");
        for (int j = 0; j < N; j++) {
        scanf("%d",&arr[i][j]);
        }
    }
}
 
// Program to pass the 2D array to a function in C by using function pointer
int main(void)
{
    int arr[M][N];
    void (*fptr)(int arr[M][N])= assign;
 
    fptr(arr);
 
    // print 2D array
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
