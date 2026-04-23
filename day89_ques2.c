#include <stdio.h>
#include <string.h>

// Day 89 - Segment Tree - Basics
// Additional practice

int main() {
    printf("Day 89 - Practice: Segment Tree - Basics\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}