//Write a program to Write function for Armstrong
#include<stdio.h>
int armstrong_check(int x)
{
    int temp,a,sum=0,ct=0,rem;
    temp=a=x;
    while (x!=0)
    {
        ct+=1;
        x/=10;
    }
    while (temp!=0)
    {
        rem=temp%10;
        int m=1;
        for (int i = 0; i < ct; i++)
        {
            m*=rem;
        }
        sum+=m;
        temp/=10;
    }
    if (a==sum)
    {
        printf("The number is ARMSTRONG");
    }
    else{
        printf("The number is not ARMSTRONG");
    }
    return 0;
}
int main()
{
    int n;
    printf("ENTER NUMBER TO CHECK:");
    scanf("%d",&n);
    armstrong_check(n);
    return 0;
}