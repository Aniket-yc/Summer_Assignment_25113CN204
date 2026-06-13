//Write a program to Find sum and average of array. 
#include<stdio.h>
int main()
{
    int n,sum=0;
    float avg;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    avg= sum/n;
    printf("SUM of array elements = %d\n",sum);
    printf("AVERAGE of array elements = %.2f",avg);
    return 0;
}