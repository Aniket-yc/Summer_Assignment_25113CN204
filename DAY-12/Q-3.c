//Write a program to Write function for Fibonacci.
#include<stdio.h>
void fibonacci(int x)
{
    int ft,st,lt;
    ft=0;
    st=1;
    for (int i = 1; i <= x; i++)
    {
        printf(" %d", ft);
        lt=ft+st;
        ft=st;
        st=lt;
    }
}
int main()
{
    int n;
    printf("ENTER NUMBER of terms:");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
