#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotate(vector<int>& nums, int k) {
    // k in range of 0 to arr.length-1
    k = k % nums.size(); 
    // Reverse array.
    reverse(nums.begin(), nums.end()); 
    // Reverse the first k elements.
    reverse(nums.begin(), nums.begin() + k);
    // Reverse the remaining numbers, started from k position.
    reverse(nums.begin() + k, nums.end());
}

int main() {
    vector<int> v {-1,-100,3,99};
    rotate(v,2);
    for(auto e : v) {
        cout << e << " ";
    }

    return 0;
}
