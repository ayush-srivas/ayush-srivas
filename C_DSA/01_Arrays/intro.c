#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element
    
    printf("🚀 DSA in C - Day 1: Array Traversal with Pointers\n");
    printf("--------------------------------------------------\n");
    
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d \t | Memory Address: %p\n", i, *(ptr + i), (ptr + i));
    }
    
    printf("\n✅ First commit done. Coding Pulse activated!\n");
    return 0;
}
