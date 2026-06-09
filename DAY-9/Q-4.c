//Write a program to Print hollow square pattern.
#include<stdio.h>
int main()
{
    int rc;
    printf("ENTER NO OF ROWS AND COLUMN:");
    scanf("%d",&rc);
    for (int i = 1; i <= rc; i++)
    {
        for (int j = 1; j <= rc; j++)
        {
            if (i==1 || i==rc || j==1 || j==rc)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}