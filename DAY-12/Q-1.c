//Write a program to Write function for palindrome. 
#include<stdio.h>
int reverse(int x , int sum)
{
    if (x==0)
    {
        return sum;
    }
    return reverse(x/10,(sum*10)+x%10);
}
void palindrome_check(int m)
{
    if(m<0){
        m=-m;
    }
    int rev;
    rev=reverse(m,0);
    if (rev==m)
    {
        printf("%d is PALINDROME",m);
    }
    else{
        printf("%d is NOT PALINDROME",m);
    }
}
int main()
{
    int n;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
    palindrome_check(n);
    return 0;
}