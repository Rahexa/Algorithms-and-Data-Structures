# 0/1 Knapsack Problem

This repository contains the implementation of the 0/1 Knapsack problem using Dynamic Programming (DP). The 0/1 Knapsack problem is a classical problem in combinatorial optimization. The goal is to find the most valuable set of items that can fit in a knapsack of fixed capacity.

## Problem Statement

You are given a set of items, each with a weight and a value. You also have a knapsack with a maximum weight capacity. The task is to determine the maximum total value of the items that you can carry in the knapsack without exceeding its weight capacity.

### Input:
- `n`: The number of items.
- `W`: The maximum weight capacity of the knapsack.
- A list of `n` items where each item has:
  - `weight[i]`: The weight of the `i`th item.
  - `profit[i]`: The value (profit) of the `i`th item.

### Output:
- The maximum value that can be obtained by selecting items whose total weight is less than or equal to `W`.

## Approach

The problem is solved using **Dynamic Programming**. We build a DP table `T[][]` where `T[i][w]` represents the maximum value achievable with the first `i` items and a knapsack of capacity `w`.

### Steps:
1. Initialize a 2D array `T` of size `(n+1) x (W+1)` with all elements set to zero.
2. Iterate through all items and weights, and for each item, decide whether to include it in the knapsack or exclude it. The value of `T[i][w]` is computed using the recurrence relation:
   - If the weight of the current item is less than or equal to `w`, then:
     ```cpp
     T[i][w] = max(T[i - 1][w], profit[i - 1] + T[i - 1][w - weight[i - 1]]);
     ```
   - Otherwise:
     ```cpp
     T[i][w] = T[i-1][w];
     ```
3. The final value `T[n][W]` will contain the maximum profit that can be achieved with the given knapsack capacity.

## When to Use

The 0/1 Knapsack problem is particularly useful in scenarios where:

- **Optimization is required**: You need to maximize the value of a set of items under constraints, such as a weight limit or a budget.
- **Resource Allocation**: When you're trying to allocate limited resources (like space, weight, or time) in the most efficient way (e.g., choosing the best items for a trip, or selecting the optimal set of projects).
- **Decision Making**: This algorithm helps in scenarios where you need to make decisions based on maximizing a value while adhering to some constraint.
  
### Some real-world use cases:
- **Knapsack for Profit Maximization**: In situations like portfolio management, you want to select a set of items (or investments) that maximize profits within a weight (or monetary) limit.
- **Cargo Loading Problems**: Deciding which items to load onto a truck or plane such that the total value of the cargo is maximized without exceeding the weight limit.
- **Memory Allocation**: In situations where computer memory or disk space is limited, and we must decide which programs or files to keep to maximize usage.
- **Project Selection**: In project management, given limited resources (e.g., time or budget), selecting the most profitable set of projects to work on.
- Input:
4 7
10 20 30 40
1 2 3 8
Output:
50
