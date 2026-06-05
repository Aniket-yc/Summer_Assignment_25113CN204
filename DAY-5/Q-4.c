//Write a program to Find largest prime factor.
#include<stdio.h>
int main()
{
    int n,temp,largestfac;
    printf("ENTER NUMBER TO CHECK:");
    scanf("%d",&n);
    temp=n;
    while(temp%2==0)
    {
        largestfac=2;
        temp=temp/2;
    }
    for (int i = 3; i*i <= temp; i=i+2)
    {
        while (temp%i==0)
        {
            largestfac=i;
            temp=temp/3;
        }
        
    }
    if (temp>2)
    {
        largestfac=temp;
    }
    printf("The largest prime factor of %d is= %d",n,largestfac);
    return 0;
}