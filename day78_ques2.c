#include <stdio.h>
#include <string.h>

// Day 78 - Greedy - Job Sequencing
// Additional practice

int main() {
    printf("Day 78 - Practice: Greedy - Job Sequencing\n");
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    
    return 0;
}