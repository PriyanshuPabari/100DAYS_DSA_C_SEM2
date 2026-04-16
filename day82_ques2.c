#include <stdio.h>
#include <string.h>

// Day 82 - Divide and Conquer - Closest Pair
// Additional practice

int main() {
    printf("Day 82 - Practice: Divide and Conquer - Closest Pair\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}