//Write a program to Remove duplicates from array. 
#include <stdio.h>
int main() {
    int n, new_size = 0;
    printf("ENTER NUMBER OF ELEMENTS: ");
    scanf("%d", &n);
    int a[n], temp[n];
    printf("ENTER ELEMENTS IN ARRAY--\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < new_size; j++) {
            if (a[i] == temp[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (is_duplicate==0) {
            temp[new_size] = a[i];
            new_size++;
        }
    }
    printf("\nARRAY AFTER REMOVING DUPLICATES:\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
    
    return 0;
}