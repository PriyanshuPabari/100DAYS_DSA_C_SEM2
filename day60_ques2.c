#include <stdio.h>
#include <string.h>

// Day 60 - Graph - Dijkstra
// Additional practice

int main() {
    printf("Day 60 - Practice: Graph - Dijkstra\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}