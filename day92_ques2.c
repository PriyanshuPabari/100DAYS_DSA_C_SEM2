#include <stdio.h>
#include <string.h>

// Day 92 - Disjoint Set - Path Compression
// Additional practice

int main() {
    printf("Day 92 - Practice: Disjoint Set - Path Compression\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}