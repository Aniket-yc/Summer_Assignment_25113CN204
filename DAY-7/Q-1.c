//Write a program to Recursive factorial.
#include<stdio.h>
int factorial(int x)
{
    if(x<=1)
    return 1;
    return x * factorial(x-1);
}
int main()
{
    int n,result;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
    if (n<0)
    {
        printf("ENTER A NON NEGATIVE NUMBER...");
        return 1;
    }
    result=factorial(n);
    printf("FACTORIAL of given number = %d",result);
    return 0;
}