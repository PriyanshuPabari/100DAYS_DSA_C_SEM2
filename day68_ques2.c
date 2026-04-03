#include <stdio.h>
#include <string.h>

// Day 68 - DP - Knapsack
// Additional practice

int main() {
    printf("Day 68 - Practice: DP - Knapsack\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}