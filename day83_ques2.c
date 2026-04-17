#include <stdio.h>
#include <string.h>

// Day 83 - Bit Manipulation - Basics
// Additional practice

int main() {
    printf("Day 83 - Practice: Bit Manipulation - Basics\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}