//Write a program to Linear search. 
#include<stdio.h>
int main()
{
    int n,s,found=0;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER ELEMENT TO SEARCH:");
    scanf("%d",&s);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==s)
        {
            printf("ELEMENT found at = %d",i+1); 
            found=1;
            break; 
        }
    }
    if (found==0)
    {
        printf("ELEMENT NOT FOUND IN ARRAY--");
    }
    return 0;
}