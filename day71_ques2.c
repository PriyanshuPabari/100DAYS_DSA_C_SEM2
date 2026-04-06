#include <stdio.h>
#include <string.h>

// Day 71 - DP - Matrix Chain
// Additional practice

int main() {
    printf("Day 71 - Practice: DP - Matrix Chain\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}