#include <stdio.h>
#include <string.h>

// Day 95 - Advanced - Floyd Warshall
// Additional practice

int main() {
    printf("Day 95 - Practice: Advanced - Floyd Warshall\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}