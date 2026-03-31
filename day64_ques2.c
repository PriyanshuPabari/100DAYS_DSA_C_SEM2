#include <stdio.h>
#include <string.h>

// Day 64 - Hashing - Collision Handling
// Additional practice

int main() {
    printf("Day 64 - Practice: Hashing - Collision Handling\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}