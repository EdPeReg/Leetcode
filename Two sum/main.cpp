#include <iostream>
#include <vector>

using namespace std;

/*
 * This is a brute force approach, is not recommended because time complexity is O(n^2)
 * We will visit each element of the array.
 * */
vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> index;
    for(int i = 0; i < nums.size(); ++i)
    {
        for(int j = i+1; j < nums.size(); ++j)
        {
            if((nums[i] + nums[j]) == target) {
                index.push_back(i);
                index.push_back(j);
            }
        }
    }

    return index;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n,0);
    for(int& e : v)
        cin >> e;

    int t;
    cin >> t;
    v = twoSum(v,t);

    for(int& e : v)
        cout << e << ' ';

    return 0;
}
