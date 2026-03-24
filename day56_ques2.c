#include <stdio.h>
#include <string.h>

// Day 56 - Graph - Adjacency List
// Additional practice

int main() {
    printf("Day 56 - Practice: Graph - Adjacency List\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}