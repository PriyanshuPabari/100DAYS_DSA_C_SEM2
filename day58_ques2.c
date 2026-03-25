#include <stdio.h>
#include <string.h>

// Day 58 - Graph - DFS
// Additional practice

int main() {
    printf("Day 58 - Practice: Graph - DFS\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}