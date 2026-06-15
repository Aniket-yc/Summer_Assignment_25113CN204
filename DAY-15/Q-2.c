//Write a program to Rotate array left.
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
    printf("ENTER NUMBER OF LEFT ROTATE:");
    scanf("%d",&rotation);
    printf("\nORIGINAL ARRAY = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    for (int r = 0; r < rotation; r++)
    {
        int temp = a[0]; 
        for (int i = 0; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[n - 1] = temp;
    }
    printf("\nROTATED ARRAY = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
