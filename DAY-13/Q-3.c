//Write a program to Find largest and smallest element. 
#include<stdio.h>
int main()
{
    int n,lrg,sml;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    lrg=a[0];
    sml=a[0];
    for (int i = 1; i < n; i++)
    {
        int temp;
        if (a[i] > lrg)
        {
            lrg=a[i];
        }
        if (a[i] < sml)
        {
            sml=a[i];
        }
    }
    printf("LARGEST ELEMENT = %d\n",lrg);
    printf("SMALLEST ELEMENT = %d ",sml);
    return 0;
}
    