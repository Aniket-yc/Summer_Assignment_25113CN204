//Write a program to Find pair with given sum. 
#include<stdio.h>
int main()
{
    int n,sum,f=0;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER SUM: ");
    scanf("%d",&sum);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] + a[j] == sum) {
                printf("pairs found %d and %d\n ",a[i],a[j]);
                f=1;
                break;
            }
        }
        if (f == 1) { 
            break;
        }
    }
    if (f==0)
    {
        printf("NO PAIRS FOUND--");
    }
    return 0;
}
