//Write a program to Print reverse star pattern. 
#include<stdio.h>
int main()
{
    int rows;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&rows);
    for ( int i = 1; i <= rows; i++)
    {
        for (int j = i; j <= rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}