#include <stdio.h>
#include <string.h>

// Day 97 - Advanced - Prims MST
// Additional practice

int main() {
    printf("Day 97 - Practice: Advanced - Prims MST\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}