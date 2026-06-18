//Write a program to Binary search. 
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
    int target;
    printf("ENTER THE ELEMENT TO SEARCH FOR: ");
    scanf("%d", &target);
    int low = 0;
    int high = n - 1;
    int found_idx = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        
        if (a[mid] == target)
        {
            found_idx = mid;
            break;
        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (found_idx != -1)
    {
        printf("ELEMENT %d FOUND AT INDEX: %d (in the sorted array)\n", target, found_idx);
    }
    else
    {
        printf("ELEMENT %d NOT FOUND IN THE ARRAY\n", target);
    }
    
    return 0;
}