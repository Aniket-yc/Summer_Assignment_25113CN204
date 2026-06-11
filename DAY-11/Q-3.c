//Write a program to Write function to check prime.
#include<stdio.h>
void prime_check(int x)
{
    int ct=0;
    for (int i = 1; i <= x; i++)
    {
        if (x%i==0)
        {
            ct+=1;
        }
    }
    if (ct==2)
    {
        printf("%d is a prime number",x);
    }
    else{
        printf("%d is NOT a prime number",x);
    }
}
int main()
{
    int a;
    printf("ENTER NUMBER TO CHECK:");
    scanf("%d",&a);
    prime_check(a);
    return 0;
}