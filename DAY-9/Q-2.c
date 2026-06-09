//Write a program to Print reverse number triangle.
#include<stdio.h>
int main()
{
    int rows;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&rows);
    for ( int i = 0; i < rows; i++)
    {
        for (int j = 1; j <= rows-i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}