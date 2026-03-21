#include <stdio.h>

// Day 53 - Heap - Heap Sort
// Practice problem

int main() {
    printf("Day 53: Heap - Heap Sort\n");
    
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}