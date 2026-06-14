// Write a program to Find duplicates in array.
#include<stdio.h>
int main()
{
    int n,dp=0;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int al_found=0,found=0;
        for (int k = 0; k < i; k++)
        {
            if (a[i]==a[k])
            {
                al_found++;
                break;
            }   
        }
        if (al_found==0)
        {
            for (int j = i+1; j < n; j++)
            {
                if (a[i]==a[j])
                {
                    dp++;
                    found=1;
                }
            }
        }
        if (found==1)
        {
            printf("DUPLICATE FOUND = %d\n",a[i]);
        }
    }
    if (dp==0)
    {
        printf("NO DUPLICATE ELEMENT FOUND--");
    }
    return 0;
}
