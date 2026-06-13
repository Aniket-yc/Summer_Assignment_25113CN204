//Write a program to Count even and odd elements.  
#include<stdio.h>
int main()
{
    int n, ev_count=0, od_count=0;
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
        if (a[i]%2==0 )
        {
            ev_count+=1;
        }
        else{
            od_count+=1;
        }
    }
    printf("EVEN COUNT = %d\n",ev_count);
    printf("ODD COUNT = %d",od_count);
    return 0;
}