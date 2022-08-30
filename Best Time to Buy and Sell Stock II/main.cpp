#include <iostream>
#include <vector>

/* 
 * There is a little formula you can use to solve for this example, taking as an example this;
 * 
 * [1,7,2,3,6,7,6,7]
 * 
 * For this example, we can simply go on crawling over the slope and keep on adding the profit 
 * obtained from every consecutive transaction.
 *
 * We can observe that the sum A+B+C is equal to the difference D corresponding to the difference 
 * between the heights of the consecutive peak and valley, where A = 2, B = 3 and C = 6.
 *
 * B-A + C-B + D-C
 * 3-2 + 6-3 + 7-6 = 1 + 3 + 1 = 5.
 * If you substract D-A = 7-2 = 5, it matches.
 *
 * Another way to think about this is:
 *
 * index 1 = Today (7) is more expensive than yesterday (1), let's sell, 7-1 = 6
 * index 2 = Today (2) is not more expensive than yesterday, we shouldn't sell.
 * index 3 = Today (3) is more expensive than yesterday (2), let's sell, 3-2 = 1
 * index 4 = Today (6) is more expensive than yesterday (3), let's sell, 6-3 = 3
 * index 5 = Today (7) is more expensive than yesterday (6), let's sell, 7-6 = 1
 * index 6 = Today (6) is not more expensive than yesterda, we shouldn't sell.
 * index 7 = Today (7) is more expensive than yesterday (6), let's sell, 7-6 = 1
 *
 * The total profit then should be 12; just add all the results.
 *
 * Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/solution/
 *
 * */

using namespace std;

int maxProfit(const vector<int>& nums) {
	int max_profit = 0;

	for (int i = 1; i < nums.size(); ++i) {
		if (nums[i] > nums[i-1])
			max_profit += (nums[i] - nums[i-1]);
	}

	return max_profit;
}

int main() {
	vector<int> v{1,2,3,4,5};
	
	cout << maxProfit(v);

	
}
