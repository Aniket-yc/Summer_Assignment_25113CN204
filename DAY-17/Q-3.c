//Write a program to Intersection of arrays.
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
    int min = (n1 < n2) ? n1 : n2;
    int c[min], k = 0;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                int already_exists = 0;
                for (int m = 0; m < k; m++) 
                {
                    if (c[m] == a[i]) 
                    {
                        already_exists = 1;
                        break;
                    }
                }
                if (already_exists==0) 
                {
                    c[k++] = a[i];
                }
                break; 
            }
        }    
    }
    printf("\nINTERSECTION OF ARRAY A and B = ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}