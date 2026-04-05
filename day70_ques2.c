#include <stdio.h>
#include <string.h>

// Day 70 - DP - LIS
// Additional practice

int main() {
    printf("Day 70 - Practice: DP - LIS\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}