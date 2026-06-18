//Write a program to Selection sort. 
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
        int sml=i;
        int temp=0;
        for (m = i+1; m < n; m++)
        {
            if (a[m]<a[sml])
            {
                sml=m;
            }   
        }
        temp=a[i];
        a[i]=a[sml];
        a[sml]=temp;
    }
    printf("SORTED ARRAY = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}