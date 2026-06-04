//Write a program to Print Armstrong numbers in a range. 
#include<stdio.h>
int main()
{
    int l,r,ct=0,temp,rem,sum;
    printf("ENTER THE STARTING POINT:");
    scanf("%d",&l);
    printf("ENTER THE END POINT:");
    scanf("%d",&r);
    printf("ARMSTRONG NUMBER BETWEEN %d to %d =",l,r);
    for (int i = l; i <= r; i++)
    {
        int cp_i=i;
        while (cp_i!=0)
        {
            ct+=1;
            cp_i/=10;
        }
        temp=i;
        while (temp!=0)
        {
            rem=temp%10;
            int m=1;
            for (int j = 0; j < ct; j++)
            {
                m*=rem;
            }
            sum+=m;
            temp/=10;
        }
        if (i==sum)
        {
            printf(" %d",i);
        }
        ct=0;
        sum=0;
    }
    return 0;
}