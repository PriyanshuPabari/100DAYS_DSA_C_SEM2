#include <stdio.h>
#include <string.h>

// Day 84 - Bit Manipulation - Count Set Bits
// Additional practice

int main() {
    printf("Day 84 - Practice: Bit Manipulation - Count Set Bits\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}