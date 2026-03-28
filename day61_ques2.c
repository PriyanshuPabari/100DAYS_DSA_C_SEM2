#include <stdio.h>
#include <string.h>

// Day 61 - Graph - Topological Sort
// Additional practice

int main() {
    printf("Day 61 - Practice: Graph - Topological Sort\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}