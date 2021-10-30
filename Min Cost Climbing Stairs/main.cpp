#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    vector<int> dp(cost.size());

    dp[0] = cost[0];
    dp[1] = cost[1];
    for(size_t i = 2; i < cost.size(); ++i) {
        dp[i] = min(dp[i-1] + cost[i], dp[i-2] + cost[i]);
    }
    return min(dp[cost.size()-1], dp[cost.size()-2]);
}

int main() {
    vector<int> v {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};

    cout << minCostClimbingStairs(v);

    return 0;
}
