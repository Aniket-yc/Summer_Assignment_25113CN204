//WAP TO  PROGRAM TO REVERSE A NUMBER
#include<stdio.h>
int main()
{
    int n,rev=0,lst;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    while (n!=0)
    {
        lst=0;
        //extract last digit
        lst=n%10;
        //reversing a number
        rev=(rev*10)+lst;
        //removing last digit
        n/=10;
    }
    printf("REVERSED NUMBER = %d",rev);
    return 0;
}