//Write a program to Generate Fibonacci series
#include<stdio.h>
int main()
{
    int ft,st,lt,n;
    printf("ENTER NO OF TERMS:");
    scanf("%d",&n);
    ft=0;
    st=1;
    for (int i = 1; i <= n; i++)
    {
        if (i==1)
        {
            printf(" %d",ft);
            continue;
        }
        else if (i==2)
        {
            printf(" %d",st);
            continue;
        }
        lt=ft+st;
        printf(" %d",lt);
        ft=st;
        st=lt;
    }
    return 0;
}