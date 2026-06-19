//Write a program to Find diagonal sum. 
#include<stdio.h>
int main()
{
    int r1,c1,l_sum=0,r_sum=0;
    printf("ENTER number of  rows and column in matrix: ");
    scanf("%d%d",&r1,&c1);
    if (r1==c1)
    {
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
                if (i==j)
                {
                    l_sum+=a[i][j];
                }
                if (i+j==r1-1)
                {
                    r_sum+=a[i][j];
                }
            }
        }
        printf("LEFT DIAGONAL SUM = %d\n",l_sum);
        printf("RIGHT DIAGONAL SUM = %d\n",r_sum);
    }
    else{
        printf("diagonal sum not possible--");
    }
    return 0;
}