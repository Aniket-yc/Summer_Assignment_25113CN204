//Write a program to Recursive Fibonacci. 
#include<stdio.h>
int fibonacci(int x)
{
    if (x==0)
    {
        return 0;
    }
    if (x==1)
    {
        return 1;
    }
    return fibonacci(x-1) + fibonacci(x-2);
}
int main()
{
    int n;
    printf("ENTER NUMBER OF TERMS:");
    scanf("%d",&n);
    printf("FIBONACCI SERIES UPTO %d terms =",n);
    for (int i = 0; i < n; i++)
    {
        printf(" %d",fibonacci(i));
    }
    return 0;
}