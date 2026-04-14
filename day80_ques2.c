#include <stdio.h>
#include <string.h>

// Day 80 - Divide and Conquer - Quick Sort
// Additional practice

int main() {
    printf("Day 80 - Practice: Divide and Conquer - Quick Sort\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}