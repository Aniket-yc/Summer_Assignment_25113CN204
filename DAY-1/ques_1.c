///WAP TO CALCULATE THE SUM OF FIRST N NATURAL NUMBERS
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("ENTER NUMBER OF N TERMS:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("SUM OF FIRST N NAUTRAL NUMBER=%d",sum);
    return 0;
}