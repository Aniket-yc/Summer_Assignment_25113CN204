//Write a program to Second largest element. 
#include<stdio.h>
int main()
{
    int n,largest,sc_largest;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    if (a[0] > a[1]) {
        largest = a[0];
        sc_largest = a[1];
    }
    else {
        largest = a[1];
        sc_largest = a[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (a[i] > largest)
        {
            sc_largest=largest;
            largest=a[i];
        }
        else if (a[i] > sc_largest && a[i]!=largest)
        {
            sc_largest=a[i];
        }
    }
    printf("SECOND LARGEST ELEMENT = %d ",sc_largest);
    return 0;
}