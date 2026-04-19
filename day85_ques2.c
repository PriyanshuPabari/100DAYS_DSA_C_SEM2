#include <stdio.h>
#include <string.h>

// Day 85 - Bit Manipulation - Power of 2
// Additional practice

int main() {
    printf("Day 85 - Practice: Bit Manipulation - Power of 2\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}