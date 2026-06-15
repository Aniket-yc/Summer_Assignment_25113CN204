//Write a program to Move zeroes to end. 
#include<stdio.h>
int main()
{
    int count=0,n;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n],rev[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nORIGINAL ARRAY = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            a[count]=a[i];
            count++;
        }
    }
    while (count < n)
    {
        a[count]=0;
        count++;
    }
    printf("\nNEW ARRAY = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}