//Write a program to Print number pyramid. 
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
        for (int j = 1; j <= i ; j++)
        {
            printf("%d",j);
        }
        for (int m = i-1; m >= 1; m--){
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}