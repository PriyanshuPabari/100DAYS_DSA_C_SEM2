#include <stdio.h>
#include <string.h>

// Day 65 - Hashing - Open Addressing
// Additional practice

int main() {
    printf("Day 65 - Practice: Hashing - Open Addressing\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}