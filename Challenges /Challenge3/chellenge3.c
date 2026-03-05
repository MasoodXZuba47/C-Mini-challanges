#include <stdio.h>

// LeetCode 27: Remove Element
//
// Problem Statement:
// Given an integer array 'nums' and an integer 'val', remove all occurrences of 'val' in 'nums' in-place.
// The relative order of the elements may be changed. Return the number of elements in 'nums' which are not equal to 'val'.
//
// This is a great basic-level question to understand array iteration and the "two-pointer" technique using loops.

int removeElement(int* nums, int numsSize, int val) {
    int k = 0; // 'k' keeps track of the index for elements we want to keep
    
    // Loop through every element in the array
    for (int i = 0; i < numsSize; i++) {
        // Only keep the element if it is NOT equal to the target value
        if (nums[i] != val) {
            nums[k] = nums[i]; // Move the valid element to the front of the array
            k++;               // Increment our tracking index
        }
    }
    
    // 'k' will now be equal to the number of elements remaining in the modified array
    return k; 
}

int main() {
    // Example test case
    int nums[] = {3, 2, 2, 3, 4, 3, 5};
    int val = 3; // The value we want to remove
    int numsSize = sizeof(nums) / sizeof(nums[0]); // Calculate array size
    
    // Print original state
    printf("Original array:\n");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nValue to remove: %d\n\n", val);
    
    // Call our removal function
    int newLength = removeElement(nums, numsSize, val);
    
    // Print final state
    printf("New length: %d\n", newLength);
    printf("Modified array (first %d elements):\n", newLength);
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    
    return 0;
}
