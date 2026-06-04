//Write a program to Check Armstrong number. 
#include<stdio.h>
int main()
{
    int n,temp,a,sum=0,ct=0,rem;
    printf("ENTER THE NUMBER TO BE CHECKED:");
    scanf("%d",&n);
    temp=a=n;
    while (n!=0)
    {
        ct+=1;
        n/=10;
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