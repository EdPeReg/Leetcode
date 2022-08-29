#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	int i = 1;
	// Continue erasing the repeating element until we don't find it anymore.
	while (i < nums.size()) {
		if (nums[i] == nums[i-1]) {
			nums.erase(nums.begin()+i);    
		} else {
			++i;
		}  
	}

	return nums.size();
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

