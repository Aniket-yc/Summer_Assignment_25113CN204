//Write a program to Transpose matrix. 
#include<stdio.h>
int main()
{
    int r1,c1;
    printf("ENTER number of  rows and column in matrix: ");
    scanf("%d%d",&r1,&c1);
    int a[r1][c1];
    printf("enter element in matrix--\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("enter element at A[%d %d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf(" %d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}