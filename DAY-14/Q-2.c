//write a program to Frequency of an element.
#include<stdio.h>
int main()
{
    int n,s,frq=0;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER ELEMENT TO FIND FREQUENCY:");
    scanf("%d",&s);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==s)
        { 
            frq+=1;
        }
    }
    if (frq==0)
    {
        printf("ELEMENT NOT FOUND IN ARRAY--");
    }
    else{
        printf("frequency of %d = %d",s,frq);
    }
    return 0;
}