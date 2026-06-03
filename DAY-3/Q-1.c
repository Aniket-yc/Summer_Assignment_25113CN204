//WAP TO CHECK WHETHER THE NUMBER IS PRIME 
#include<stdio.h>
int main()
{
    int n,ct=0;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            ct+=1;
        }
        
    }
    if (ct==2)
    {
        printf("The number is PRIME");
    }
    else
    {
        printf("The number is NOT PRIME");
    }
    return 0;
}