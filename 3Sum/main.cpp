#include <iostream>
#include <algorithm>
#include <vector>

/* O(n^2) */
std::vector< std::vector<int> > threeSum(std::vector<int>& nums) {
    std::vector< std::vector<int> > triplets;
    
    std::sort(nums.begin(), nums.end());
    for(size_t index1 = 0; index1 < nums.size(); ++index1) {
        // Avoid duplicated elements from the left.
        if(index1 > 0 and nums[index1] == nums[index1-1])
            continue;

        for(size_t left = index1 + 1, right = nums.size() - 1; right > left;) {
            int result = nums[index1] + nums[left] + nums[right];

            if(result == 0) {
                triplets.push_back({nums[index1], nums[left], nums[right]});
                --right;

                // Avoid duplicated elements from the right.
                while(right > left and nums[right] == nums[right+1]) --right;
            }
            else if(result > 0)
                --right;
            else
                ++left;
        }
    }

    return triplets;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);

    for(auto &e : v)
        std::cin >> e;

    std::vector< std::vector<int> > r = threeSum(v);
    for(auto &i : r) {
        for(auto &e : i) {
            std::cout << e << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
