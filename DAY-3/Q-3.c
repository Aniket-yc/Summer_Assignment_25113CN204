//WAP TO FIND THE GCD OF TWO NUMBERS
#include<stdio.h>
int main()
{
    int n1,n2,gcd;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&n1);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&n2);
    for(int i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    printf("GCD of %d and %d = %d",n1,n2,gcd);
    return 0;
}