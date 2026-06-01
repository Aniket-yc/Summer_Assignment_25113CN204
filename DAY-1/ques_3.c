//WAP TO PROGRAM TO FIND FACTORIAL OF A NUMBER
#include<stdio.h>
int main()
{
    int n,fac=1;
    printf("ENTER NUMBER TO FIND FACTORIAL:");
    scanf("%d",&n);
    if (n==0)
    {
        printf("ENTER VALID NUMBER");
    }
    else{
        for (int i=1 ; i <= n; i++)
        {
            fac*=i;
        }
        printf("FACTORIAL OF GIVEN NUMBER=%d",fac);
    }
    return 0;
}