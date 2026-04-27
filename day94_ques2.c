#include <stdio.h>
#include <string.h>

// Day 94 - Advanced - Rabin Karp
// Additional practice

int main() {
    printf("Day 94 - Practice: Advanced - Rabin Karp\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}