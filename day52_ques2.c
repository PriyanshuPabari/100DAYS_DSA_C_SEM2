#include <stdio.h>
#include <string.h>

// Day 52 - Heap - Max Heap
// Additional practice

int main() {
    printf("Day 52 - Practice: Heap - Max Heap\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}