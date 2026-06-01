//WAP TO PRINT THE MULTIPLICATION TABLE OF A GIVEN NUMBER
#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER TO WRITE TABLE:");
    scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        printf("\n%d x %d = %d",n,i,n*i);
    }
    return 0;
}