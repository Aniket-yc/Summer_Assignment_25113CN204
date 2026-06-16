//Write a program to Find missing number in array. 
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n-1];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    int ex_sum = 0;
    int ac_sum = 0;
    int m=0;
    ex_sum = (n * (n + 1)) / 2;
    for (int i = 0; i < n-1; i++) {
        ac_sum = ac_sum + a[i];
    }
    m = ex_sum - ac_sum;
    printf("missing number = %d",m);
    return 0;
}