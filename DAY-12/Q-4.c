//Write a program to Write function for perfect number. 
#include<stdio.h>
void perfect_number(int x)
{
    int sum=0,i;
    for (i = 1; i < x; i++)
    {
        if (x%i==0)
        {
            sum+=i;   
        }
    }
    if (sum==x && x>0)
    {
        printf("%d is a PERFECT NUMBER",x);
    }
    else{
        printf("%d is NOT PERFECT NUMBER",x);
    }
}
int main()
{
    int n;
    printf("ENTER NUMBER TO CHECK:");
    scanf("%d",&n);
    perfect_number(n);
    return 0;
}