//Write a program to Convert binary to decimal.
#include<stdio.h>
int main()
{
    int i=0,ld;
    long long n,dec=0;
    printf("ENTER BINARY NUMBER:");
    scanf("%lld",&n);
    while (n!=0)
    {
        ld=n%10;
        int p=1;
        for (int j = 0; j < i; j++)
        {
            p*=2;
        }
        dec+=ld*p;
        n/=10;
        i++;
    }
    printf("decimal conversion= %lld",dec);
    return 0;
}