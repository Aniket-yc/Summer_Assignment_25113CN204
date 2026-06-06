//Write a program to Find x^n without pow().
#include<stdio.h>
int main()
{
    int x,n,temp;
    double re=1;
    printf("ENTER NUMBER:");
    scanf("%d",&x);
    printf("ENTER POWER OF X:");
    scanf("%d",&n);
    temp=n;
    if (n<0)
    {
        n=(-1)*n;
    }
    for (int i = 1; i <= n; i++)
    {
        re*=x;
    }
    if (temp<0)
    {
        re=1/re;
    }
    
    printf("result= %g",re);
    return 0;
}