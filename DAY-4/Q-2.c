//Write a program to Find nth Fibonacci term. 
#include<stdio.h>
int main()
{
    int ft,st,lt,n;
    printf("ENTER nth Term To Find:");
    scanf("%d",&n);
    ft=0;
    st=1;
    for (int i = 1; i <= n; i++)
    {
        if (i==1)
        {
            lt=ft;
            continue;
        }
        else if (i==2)
        {
            lt=st;
            continue;
        }
        lt=ft+st;
        ft=st;
        st=lt;
    }
    printf("nth term found is = %d",lt);
    return 0;
}