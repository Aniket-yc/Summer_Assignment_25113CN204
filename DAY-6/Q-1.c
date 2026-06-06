//Write a program to Convert decimal to binary.
#include<stdio.h>
int main()
{
    long long n;
    int bin=0,rem,pl=1;
    printf("ENTER DECIMAL NUMBER:");
    scanf("%lld",&n);
    while(n!=0)
    {
        rem=n%2;
        bin=bin+(rem*pl);
        pl=pl*10;
        n=n/2;
    }
    printf("binary conversion= %d",bin);
    return 0;
}