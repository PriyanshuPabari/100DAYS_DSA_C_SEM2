#include <stdio.h>
#include <string.h>

// Day 86 - Bit Manipulation - XOR Problems
// Additional practice

int main() {
    printf("Day 86 - Practice: Bit Manipulation - XOR Problems\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}