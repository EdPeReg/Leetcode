#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Probably O(n^2)
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> r;
    for(size_t i = 0; i < nums1.size(); ++i) {
        auto element = find(nums2.begin(), nums2.end(), nums1.at(i));
        size_t index = element - nums2.begin();

        bool found = false;
        for(size_t j = index; j < nums2.size() - 1; ++j) {
            if(nums2.at(j + 1) > nums2.at(index)) {
                r.push_back(nums2.at(j + 1));
                found = true;
                break;
            } 
        }
        if(!found) r.push_back(-1);
    }            
    return r;
}

int main() {
    vector<int> v1 {1,3,5,2,4};
    vector<int> v2 {6,5,4,3,2,1,7};

    vector<int> r = nextGreaterElement(v1,v2);
    for(const auto& e : r) {
        cout << e << " ";
    }

    return 0;
}
