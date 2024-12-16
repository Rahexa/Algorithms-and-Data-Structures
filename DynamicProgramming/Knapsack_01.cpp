#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, W;

    // Input the number of items and maximum weight capacity
    cout << "Enter the number of items: ";
    cin >> n;
    cout << "Enter the maximum weight capacity of the knapsack: ";
    cin >> W;

    vector<int> weights(n), values(n);

    // Input weights and values of items
    cout << "Enter the weights of the items:\n";
    for (int i = 0; i < n; i++) cin >> weights[i];

    cout << "Enter the values of the items:\n";
    for (int i = 0; i < n; i++) cin >> values[i];

    // Create a DP table with dimensions (n+1) x (W+1)
    vector<vector<int>> T(n + 1, vector<int>(W + 1, 0));

    // Fill the DP table
    for (int i = 0; i <= n; i++) { // For each item
        for (int w = 0; w <= W; w++) { // For each capacity
            if (i == 0 || w == 0) {
                T[i][w] = 0; // Base case: no items or no capacity
            } 
            else if (weights[i - 1] <= w) {
                // Max of including the current item or excluding it
                T[i][w] = max(T[i - 1][w], values[i - 1] + T[i - 1][w - weights[i - 1]]);
            } 
            else {
                T[i][w] = T[i - 1][w]; // Exclude the current item
            }
        }
    }

    // Print the maximum value that can be obtained
    cout << "The maximum value that can be obtained is: " << T[n][W] << endl;

    return 0;
}

