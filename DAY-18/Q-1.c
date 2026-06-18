//Write a program to Bubble sort.
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER NUMBER OF ELEMENTS: ");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS array A --\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=0;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("SORTED ARRAY = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}