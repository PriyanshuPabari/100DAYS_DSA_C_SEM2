#include <stdio.h>
#include <string.h>

// Day 81 - Divide and Conquer - Binary Search
// Additional practice

int main() {
    printf("Day 81 - Practice: Divide and Conquer - Binary Search\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}