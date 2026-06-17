//Write a program to Merge arrays.
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("ENTER NUMBER OF ELEMENTS in A:");
    scanf("%d",&n1);
    printf("ENTER NUMBER OF ELEMENTS in B:");
    scanf("%d",&n2);
    int a[n1],b[n2];
    printf("ENTER ELEMENTS array A --\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER ELEMENTS array B --\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&b[i]);
    }
    int c[n1+n2];
    for (int i = 0; i < n1; i++)
    {
        c[i]=a[i];
    }
    for (int i = 0; i < n2; i++)        
    {
        c[n1+i]=b[i];
    }
    printf("\nMERGE OF ARRAY A and B = ");
    for (int i = 0; i < n1+n2; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}