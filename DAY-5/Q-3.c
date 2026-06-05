//Write a program to Check strong number.
#include<stdio.h>
int factorial(int x)
{
    int fac=1;
    for (int i=1 ; i <= x; i++)
    {
        fac*=i;
    }
    return fac;
}
int main()
{
    int n,sum=0,temp,rem;
    printf("ENTER NUMBER TO CHECK:");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        rem=temp%10;
        sum+=factorial(rem);
        temp/=10;
    }
    if (sum==n)
    {
        printf("It is a STRONG NUMBER");
    }
    else
    {
        printf("It is NOT a STRONG NUMBER");
    }
    return 0;
}