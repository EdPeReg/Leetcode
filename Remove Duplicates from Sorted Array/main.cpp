#include <iostream>
#include <vector>

/* 
 * Two pointers, left pointer is used for the unique element,
 * right pointer is used for the current element.
 *
 * Size of the array doesn't change.
 *
 * Complexity: O(N)
 *
 * Problem: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * */

using namespace std;

int removeDuplicates(vector<int>& nums) {
	int left = 1;

	for (int right = 1; right < nums.size(); ++right) {
		if (nums[right] != nums[right-1]) {
			nums[left++] = nums[right];
		}
	}

	return left;
}

int main()
{
	int n;
	cin >> n;
	vector<int> v(n,0);

	for(int& e : v)
		cin >> e;

	cout << removeDuplicates(v);
}

