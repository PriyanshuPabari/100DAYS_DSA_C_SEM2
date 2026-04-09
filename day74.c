#include <stdio.h>

// Day 74 - DP - Rod Cutting
// Practice problem

int main() {
    printf("Day 74: DP - Rod Cutting\n");
    
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}