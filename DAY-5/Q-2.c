//Write a program to Print factors of a number. 
#include<stdio.h>
int main()
{
    int n,i;
    printf("ENTER NUMBER TO PRINT FACTORS:");
    scanf("%d",&n);
    printf("FACTORS OF A NUMBER =");
    for (i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            printf(" %d",i);
        }
    }
    return 0;
}