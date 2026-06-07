//Write a program to Recursive reverse number. 
#include<stdio.h>
int reverse(int x,int sum)
{
    if (x==0)
    {
        return sum;
    }
    return reverse(x/10,(sum*10)+x%10);
}
int main()
{
    int n;
    printf("ENTER NUMBER TO REVERSE:");
    scanf("%d",&n);
    printf("Reverse of %d = %d",n,reverse(n,0));
    return 0;
}