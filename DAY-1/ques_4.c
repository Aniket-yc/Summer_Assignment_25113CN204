//WAP TO COUNT THE DIGITS IN A NUMBER
#include<stdio.h>
int main()
{
    long long n;
    int cn=0;
    printf("ENTER THE NUMBER:");
    scanf("%lld",&n);
    if (n==0)
    {
        cn=1;
    }
    else{
        while (n!=0)
        {
            cn+=1;
            n=n/10;
        }
    }
    printf("%d",cn);
    return 0;
    
}