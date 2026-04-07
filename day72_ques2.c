#include <stdio.h>
#include <string.h>

// Day 72 - DP - Coin Change
// Additional practice

int main() {
    printf("Day 72 - Practice: DP - Coin Change\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}