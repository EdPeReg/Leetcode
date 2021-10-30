#include <iostream>
#include <vector>

using namespace std;

int max_profit(vector<int>& prices) {
    int max = 0;
    int min = prices[0];

    for(size_t i = 1; i < prices.size(); ++i) {
        min = std::min(prices[i], min);
        max = std::max(max, prices[i]-min);

    }
    return max;
}

int main() {
    vector<int> prices {2,4,1};
    cout << max_profit(prices) << '\n';

    return 0;
}
