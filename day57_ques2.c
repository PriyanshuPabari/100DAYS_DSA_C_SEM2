#include <stdio.h>
#include <string.h>

// Day 57 - Graph - BFS
// Additional practice

int main() {
    printf("Day 57 - Practice: Graph - BFS\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}