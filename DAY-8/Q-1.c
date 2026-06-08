//Write a program to Print half pyramid pattern.
#include<stdio.h>
int main()
{
    int rows,choice;
    printf("1.Left Half Pyramid\n2.Right Half Pyramid\nSELECT TYPE OF HALF PYRAMID TO PRINT:");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("ENTER NUMBER OF ROWS IN PYRAMID:");
        scanf("%d",&rows);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
    else if (choice==2)
    {
        printf("ENTER NUMBER OF ROWS IN PYRAMID:");
        scanf("%d",&rows);
        for (int i = 1; i <= rows ; i++)
        {
            for (int j = 1; j <= rows-i; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= i; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
    else{
        printf("ENTER CORRECT CHOICE..");
    }
    return 0;
}