//Write a program to Recursive sum of digits
#include<stdio.h>
int  sum_of_digits(int x)
{
    if (x==0)
    {
        return 0;
    }
    else{
        return x%10 + sum_of_digits( x/10 );
    }
}
int main()
{
    int n;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
    printf("sum of digits = %d",sum_of_digits(n));
    return 0;
}