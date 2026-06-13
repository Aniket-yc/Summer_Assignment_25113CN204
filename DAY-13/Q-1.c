//Write a program to Input and display array.
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ARRAY ELEMENTS DISPLAY=");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}