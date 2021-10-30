#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
    vector<int> v(nums.size());
    size_t n = nums.size();
    for(size_t i = 0; i < nums.size(); ++i) {
        v[(i+k) % n] = nums[i];
    }
    nums = v;
}

int main() {
    vector<int> v {1,2,3};
    rotate(v,11939);
    for(auto e : v) {
        cout << e << " ";
    }

    return 0;
}
