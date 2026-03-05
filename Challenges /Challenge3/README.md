# Challenge 3: LeetCode Basic Array & Loops

## Overview
This repository includes a C program solution for the foundational LeetCode problem **[27. Remove Element](https://leetcode.com/problems/remove-element/)**. 

This challenge focuses heavily on **Loops** (`for` loops) and the **Two-Pointer technique**, which are fundamental concepts for array manipulation in C.

## Problem Statement
Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` **in-place**. The relative order of the elements may be changed. Return the number of elements in `nums` which are not equal to `val`.

You must do this by modifying the input array in-place with `O(1)` extra memory.

## How the Solution Works
1. A variable `k` is initialized to `0`. It acts as a pointer to the index where the next "safe" (non-targeted) element should be placed.
2. A `for` loop iterates through the entire array using the loop variable `i`.
3. Inside the loop, it uses an `if` statement: if `nums[i]` is **not** equal to the value we want to remove (`val`), we copy `nums[i]` into `nums[k]` and then increment `k`.
4. If it **is** equal to the targeted `val`, we simply let the loop skip it.
5. In the end, `k` accurately reflects the new length of the array, with all non-targeted items positioned correctly at the front.

## How to Compile and Run
Open your terminal/command prompt and navigate to the folder where the file is stored.

**1. Compile the code using GCC:**
```bash
gcc chellenge3.c -o challenge3
```

**2. Run the executable:**
- **On Windows:**
```bash
challenge3.exe
```
- **On Mac/Linux:**
```bash
./challenge3
```

### Expected Output
```text
Original array:
3 2 2 3 4 3 5 
Value to remove: 3

New length: 4
Modified array (first 4 elements):
2 2 4 5 
```
