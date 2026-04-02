#include <stdio.h>
#include <string.h>

// Day 66 - Hashing - Chaining
// Additional practice

int main() {
    printf("Day 66 - Practice: Hashing - Chaining\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}