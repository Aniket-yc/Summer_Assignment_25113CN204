//WAP TO FIND PRODUCT OF DIGITS
#include<stdio.h>
int main()
{
    int n,prod=1;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    while (n!=0)
    {
        //extract and multiply last digit
        prod*=n%10;
        //remove last digit
        n/=10;
    }
    printf("PRODUCT OF DIGITS = %d",prod);
    return 0;
}