#include <stdio.h>
#include <string.h>

// Day 75 - Greedy - Activity Selection
// Additional practice

int main() {
    printf("Day 75 - Practice: Greedy - Activity Selection\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}