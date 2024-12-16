# Algorithms and Data Structures

This repository contains implementations of various algorithms and data structures. Each algorithm is categorized based on its type (e.g., Dynamic Programming, Graph Theory, etc.).

## Dynamic Programming

### 0/1 Knapsack Problem

#### Problem Statement
The 0/1 Knapsack problem is a classic problem in dynamic programming where you are given a set of items, each with a weight and a value, and a knapsack with a weight capacity. The objective is to maximize the value of the items in the knapsack without exceeding its weight capacity.

#### Approach
This solution uses dynamic programming to solve the problem in `O(n*W)` time complexity, where `n` is the number of items and `W` is the maximum weight capacity of the knapsack.

#### Algorithm
1. Initialize a 2D array `dp` where `dp[i][w]` represents the maximum value that can be obtained with the first `i` items and a weight limit of `w`.
2. Fill the array based on the choices of either including or excluding each item.
3. The final result will be stored in `dp[n][W]`.

#### Code
You can find the implementation in the `Knapsack_01.cpp` file.

#### Example Input
