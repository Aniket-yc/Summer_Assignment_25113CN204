//Write a program to Write function to find sum of two numbers.
#include<stdio.h>
int sum(int x,int y)
{
    return x + y ;
}
int main()
{
    int a,b,result;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);
    result=sum(a,b);
    printf("Sum of two numbers = %d",result);
    return 0;
}