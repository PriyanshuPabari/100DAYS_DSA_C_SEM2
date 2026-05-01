#include <stdio.h>
#include <string.h>

// Day 98 - Advanced - Kruskals MST
// Additional practice

int main() {
    printf("Day 98 - Practice: Advanced - Kruskals MST\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}