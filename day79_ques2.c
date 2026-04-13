#include <stdio.h>
#include <string.h>

// Day 79 - Divide and Conquer - Merge Sort
// Additional practice

int main() {
    printf("Day 79 - Practice: Divide and Conquer - Merge Sort\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}