#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;

// Probably not O(n^2) because we are using map.
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    // Our final result will be the same size than our nums1.
    vector<int> result(nums1.size());
    // less - greater
    unordered_map<int, int> m;
    stack<int> s;

    // Save the next greater element.
    for(size_t i = 0; i < nums2.size(); ++i) {
        while(!s.empty() and nums2.at(i) > s.top()) {
            m[s.top()] = nums2.at(i);
            s.pop();
        }
        s.push(nums2.at(i));
    }

    // Find our numbers that are in our nums1.
    for(size_t i = 0; i < nums1.size(); ++i) {
        if(m.find(nums1.at(i)) != m.end()) {
            result[i] = m[nums1.at(i)];
        } else {
            result[i] = -1;
        }
    }
    return result;
}

int main() {
    vector<int> v1 {2,4};
    vector<int> v2 {1,2,3,4};

    vector<int> r = nextGreaterElement(v1,v2);
    for(const auto& e : r) {
        cout << e << " ";
    }

    return 0;
}

