#include <stdio.h>
#include <string.h>

// Day 69 - DP - LCS
// Additional practice

int main() {
    printf("Day 69 - Practice: DP - LCS\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}