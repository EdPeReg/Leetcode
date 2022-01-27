#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

/* O(n^3) Time limit exceeded. */
std::vector< std::vector<int> > threeSum(std::vector<int>& nums) {
    std::vector< std::vector<int> > triplets;
    std::map< std::vector<int>, int > map;

    for(size_t i = 0; i < nums.size(); ++i) {
        for(size_t j = i+1; j < nums.size(); ++j) {
            for(size_t k = j+1; k < nums.size(); ++k) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    std::vector<int> triplet {nums[i], nums[j], nums[k]};

                    // Sort to detect repeated triplets.
                    std::sort(triplet.begin(), triplet.end());
                    // Because how the map works, won't addd the repeated triplet.
                    map[triplet] = 1;
                }
            }
        }
    }

    for(const auto& [key, value] : map)
        triplets.push_back(key);

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
