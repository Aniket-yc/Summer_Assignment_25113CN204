//WAP TO PRINT PRIME NUMBERS IN A RANGE
#include<stdio.h>
int main()
{
    int l,r,ct;
    printf("ENTER THE STARTING POINT:");
    scanf("%d",&l);
    printf("ENTER THE END POINT:");
    scanf("%d",&r);
    printf("The prime number between %d to %d are: ",l,r);
    for (int i = l; i <= r; i++)
    {
        ct=0;
        for (int j = 1; j <= i; j++)
        {
            if (i%j==0)
            {
                ct+=1;
            }
            
        }
        if (ct==2)
        {
            printf(" %d",i);
        }
    }
    return 0;
}