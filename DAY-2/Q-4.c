//WAP TO CHECK WHETHER A NUMBER IS PALINDROME
#include<stdio.h>
int main()
{
    int n,rev=0,lst,temp;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    temp=n;
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
    //check if the number is palindrome or not
    if (temp==rev)
    {
        printf("The number is PALINDROME ");
    }
    else{
        printf("The number is NOT PALINDROME ");
    }
    return 0;
}