//Write a program to Print character triangle. 
#include<stdio.h>
int main()
{
    int rows;
    char a[]="AABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("ENTER NUMBER OF ROWS :");
    scanf("%d",&rows);
    if (rows > 26)
    {
        rows=26;
    }
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %c ",a[j]);
        }
        printf("\n");
    }
    return 0;
}