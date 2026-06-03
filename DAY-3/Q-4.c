//WAP TO FIND LCM OF TWO NUMBERS
#include<stdio.h>
int main()
{
    int n1,n2,lcm,gcd;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&n1);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&n2);
    for (int i = 1; i <= n1 && i <=n2 ; i++)
    {
         if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    lcm=(n1*n2)/gcd;
    printf("LCM of %d and %d = %d",n1,n2,lcm);
    return 0;   
}