#include <stdio.h>
#include <string.h>

// Problem: Find the length of the longest substring without repeating characters.
// This is a classic intermediate problem that uses the "Sliding Window" technique.

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLength = 0;
    
    // Array to store the last seen index of each ASCII character
    int charIndex[128]; 
    
    // Initialize all character indices to -1 (meaning not seen yet)
    for (int i = 0; i < 128; i++) {
        charIndex[i] = -1;
    }
    
    int left = 0; // Left boundary of our sliding window
    
    // 'right' is the right boundary of our sliding window
    for (int right = 0; right < n; right++) {
        char currentChar = s[right];
        
        // If the character was seen before and is inside our current window
        if (charIndex[(unsigned char)currentChar] >= left) {
            // Move the left boundary right past the previous occurrence
            left = charIndex[(unsigned char)currentChar] + 1;
        }
        
        // Update the last seen index of the current character
        charIndex[(unsigned char)currentChar] = right;
        
        // Calculate the current window length and update maxLength if necessary
        int currentLength = right - left + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    
    return maxLength;
}

int main() {
    // Test Case 1
    char test1[] = "abcabcbb";
    printf("Input: \"%s\"\n", test1);
    // Expected output: 3 ("abc")
    printf("Length: %d\n\n", lengthOfLongestSubstring(test1));

    // Test Case 2
    char test2[] = "bbbbb";
    printf("Input: \"%s\"\n", test2);
    // Expected output: 1 ("b")
    printf("Length: %d\n\n", lengthOfLongestSubstring(test2));

    // Test Case 3
    char test3[] = "pwwkew";
    printf("Input: \"%s\"\n", test3);
    // Expected output: 3 ("wke")
    printf("Length: %d\n\n", lengthOfLongestSubstring(test3));

    return 0;
}
