//Write a program to Union of arrays. 
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
    int c[n1+n2],k=0;
    for (int i = 0; i < n1; i++)
    {
        c[k++]=a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        int dp=0;
        for (int j = 0; j < k; j++)
        {
            if (b[i]==c[j])
            {
                dp=1;
                break;
            }
        }
        if(dp==0)
        {
            c[k++]=b[i];
        }    
    }
    printf("\nUNION OF ARRAY A and B = ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}