//Write a program to Count set bits in a number.
#include<stdio.h>
int main()
{
    int n,temp,bit=0,rem;
    printf("ENTER DECIMAL NUMBER:");
    scanf("%d",&n);
    temp=n;
    if(n < 0)
    {
        n=-n;
    }
    while(n!=0)
    {
        rem=n%2;
        if (rem==1)
        {
            bit+=1;
        }
        n=n/2;
    }
    printf("NUMBER OF BITS IN %d = %d",temp,bit);
    return 0;
}