//Write a program to Write function to find factorial.
#include<stdio.h>
long long factorial(int x)
{
    if (x==0)
    {
        return 1;
    }
    return x * factorial(x-1);
}
int main()
{
    long long result;
    int a;
    printf("ENTER NUMBER:");
    scanf("%d",&a);
    result=factorial(a);
    printf("factorial= %lld",result);
    return 0;
}