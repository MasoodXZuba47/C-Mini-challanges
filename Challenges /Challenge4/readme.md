# Longest Substring Without Repeating Characters

This repository contains a solution to the classic algorithm problem: "Longest Substring Without Repeating Characters" implemented in C.

## Problem Statement

Given a string `s`, find the length of the longest substring without repeating characters.

### Examples

**Example 1:**
```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
```

**Example 2:**
```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
```

**Example 3:**
```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
```

## Solution Overview

The solution uses the **Sliding Window** technique, which is a common pattern for solving subarray/substring problems efficiently.

### Approach

1.  **Window Boundaries:** We maintain two pointers, `left` and `right`, to represent the current boundaries of our substring (the "window").
2.  **Character Tracking:** We use an array (`charIndex`) of size 128 (to cover all standard ASCII characters) to store the latest index at which we've seen each character. We initialize this array with `-1`.
3.  **Iteration:** As we iterate through the string with the `right` pointer:
    *   We check the last seen position of the current character.
    *   If the character was seen *inside* our current window (i.e., its last seen index is `>= left`), it means we've found a repeating character. We must shrink the window from the left by moving the `left` pointer to the index immediately after the previous occurrence of this character.
    *   We update the `charIndex` of the current character to the current `right` index.
    *   At each step, we calculate the current window length (`right - left + 1`) and update the `max_length` if the current length is greater.

### Complexity

*   **Time Complexity:** $O(N)$, where $N$ is the length of the string. The `right` pointer iterates through the string exactly once, and retrieving or updating a value in the `charIndex` array takes $O(1)$ time.
*   **Space Complexity:** $O(1)$. The size of the `charIndex` array is constant (128 elements for ASCII constraints).

## How to Run

1.  Ensure you have a C compiler (like GCC) installed.
2.  Compile the source file:
    ```bash
    gcc challenge4.c -o challenge4
    ```
3.  Execute the compiled program:
    ```bash
    ./challenge4
    ```

The program contains the hardcoded tests from the examples above, which will print their input values, and the calculated max lengths of all matching longest substrings.
