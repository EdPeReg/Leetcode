#include <iostream>
#include <vector>
#include <algorithm>

/**
 * Please check documentation: https://en.cppreference.com/w/cpp/algorithm/lower_bound
 * 
 * But it seems basically it checks if the target <= x number in the vector, it will
 * return the index, but the magic here is nums.begin()
 * 
 * Basically if it's not found, lower_bounds return an iterator to nums.end(), and to get
 * the index or distance we only need to substract to our nums.begin(), given our index where
 * nums.end() is
*/

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
}

using namespace std;

int main()
{
    vector<int> v{1,3,5,6};
    int target = 5;

    cout << searchInsert(v,target) << '\n';
    target = 2;
    cout << searchInsert(v,target) << '\n';
    target = 7;
    cout << searchInsert(v,target) << '\n';

    return 0;
}