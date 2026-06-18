//Write a program to Sort array in descending order.
#include<stdio.h>
int main()
{
    int n,m;
    printf("ENTER NUMBER OF ELEMENTS: ");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS array A --\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        int lar=i;
        int temp=0;
        for (m = i+1; m < n; m++)
        {
            if (a[m] > a[lar])
            {
                lar=m;
            }   
        }
        temp=a[i];
        a[i]=a[lar];
        a[lar]=temp;
    }
    printf("SORTED ARRAY in descending order = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}