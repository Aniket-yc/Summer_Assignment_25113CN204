//Write a program to Print star pyramid. 
#include<stdio.h>
int main()
{
    int rows;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= rows-i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}