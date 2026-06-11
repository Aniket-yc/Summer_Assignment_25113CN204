//Write a program to Write function to find maximum.
#include<stdio.h>
int maximum(int x,int y)
{
    return (x > y)? x:y;    
}
int main()
{
    int a,b,result;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);
    result=maximum(a,b);
    printf("maximum = %d",result);
    return 0;
}