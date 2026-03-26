#include <stdio.h>
#include <string.h>

// Day 59 - Graph - Shortest Path
// Additional practice

int main() {
    printf("Day 59 - Practice: Graph - Shortest Path\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}