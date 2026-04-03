#include <stdio.h>
#include <string.h>

// Day 67 - DP - Fibonacci
// Additional practice

int main() {
    printf("Day 67 - Practice: DP - Fibonacci\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}