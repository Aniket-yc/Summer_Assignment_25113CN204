//WAP TO FIND THE SUM OF DIGITS OF A NUMBER
#include<stdio.h>
int main()
{
    //long int for long number
    long long n; 
    int sum=0;
    printf("ENTER THE NUMBER:");
    scanf("%lld",&n);
    while (n!=0)
    {
        //extract and adding last digit 
        sum+=n%10;
        //removing last digit
        n/=10;
    }
    printf("SUM OF DIGITS = %d",sum);
    return 0;
}