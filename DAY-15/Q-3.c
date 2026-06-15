//Write a program to Rotate array right. 
#include<stdio.h>
int main()
{
    int n,rotation;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n],rev[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER NUMBER OF RIGHT ROTATE:");
    scanf("%d",&rotation);
    printf("\nORIGINAL ARRAY = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    for (int r = 0; r < rotation; r++)
    {
        int temp = a[n-1]; 
        for (int i = n-1; i > 0; i--)
        {
            a[i] = a[i-1];
        }
        a[0] = temp;
    }
    printf("\nROTATED ARRAY = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}