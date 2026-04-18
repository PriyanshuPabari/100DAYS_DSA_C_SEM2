#include <stdio.h>

// Day 84 - Bit Manipulation - Count Set Bits
// Practice problem

int main() {
    printf("Day 84: Bit Manipulation - Count Set Bits\n");
    
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}