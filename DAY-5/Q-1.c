//Write a program to Check perfect number. 
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("ENTER NUMBER TO CHECK:");
    scanf("%d",&n);
    for (i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum+=i;   
        }
    }
    if (sum==n && n>0)
    {
        printf("%d is a PERFECT NUMBER",n);
    }
    else{
        printf("%d is NOT PERFECT NUMBER",n);
    }
    return 0;
}