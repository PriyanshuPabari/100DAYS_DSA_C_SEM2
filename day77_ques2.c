#include <stdio.h>
#include <string.h>

// Day 77 - Greedy - Fractional Knapsack
// Additional practice

int main() {
    printf("Day 77 - Practice: Greedy - Fractional Knapsack\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}