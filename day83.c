#include <stdio.h>

// Day 83 - Bit Manipulation - Basics
// Practice problem

int main() {
    printf("Day 83: Bit Manipulation - Basics\n");
    
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}