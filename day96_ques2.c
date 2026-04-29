#include <stdio.h>
#include <string.h>

// Day 96 - Advanced - Bellman Ford
// Additional practice

int main() {
    printf("Day 96 - Practice: Advanced - Bellman Ford\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}