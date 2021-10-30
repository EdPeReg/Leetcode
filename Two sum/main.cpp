#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

/*
 * Better approach to O(n), each lookup takes O(1) time.
 * But this increase space complecity to O(n) because each element in the vector
 * can be added to our map.
 *
 * */
vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> u_map;
    for(int i = 0; i < nums.size(); ++i)
    {
        // Obtain the number that we want to find.
        int complement = target - nums[i];

        // We preceed to find the element in our map and check that we don't use the same value.
        if(u_map.find(complement) != u_map.end() and u_map[complement] != i)
            return {i, u_map[complement]};
        u_map[nums[i]] = i;
    }
    return {};
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
