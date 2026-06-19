//Write a program to Add matrices.
#include<stdio.h>
int main()
{
    int r1,r2,c1,c2;
    printf("ENTER number of  rows and column in A: ");
    scanf("%d%d",&r1,&c1);
    printf("ENTER number of  rows and column in B: ");
    scanf("%d%d",&r2,&c2);
    if (r1==r2 && c1==c2)
    {
        int a[r1][c1],b[r2][c2],c[r1][c1];
        printf("enter element in matrix A--\n ");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("enter element at A[%d %d] = ",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter element in matrix B--\n ");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("enter element at B[%d %d] = ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                c[i][j] = a[i][j]+b[i][j];
            }
        }
        printf("SUM OF MATRICES--\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf(" %d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("matrices addition not possible--");
    }
    return 0;
}