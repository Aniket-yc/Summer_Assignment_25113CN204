//Write a program to Find maximum frequency element. 
#include<stdio.h>
int main()
{
    int n,max_freq=0,element=0;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > max_freq) {
            max_freq = count;
            element = a[i];
        }
    }
    printf("maximum frequency element = %d (appears %d times) ",element,max_freq);
    return 0;
}
