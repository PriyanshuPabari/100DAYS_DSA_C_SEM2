#include <stdio.h>
#include <string.h>

// Day 54 - Heap - Priority Queue
// Additional practice

int main() {
    printf("Day 54 - Practice: Heap - Priority Queue\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}