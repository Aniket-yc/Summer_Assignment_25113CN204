//Write a program to Reverse array. 
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n],rev[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        rev[i]=a[n-1-i];
    }
    printf("REVERSE OF ARRAY = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",rev[i]);
    }
    return 0;
}

