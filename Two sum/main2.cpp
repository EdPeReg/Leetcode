#include <iostream>
#include <vector>

/* Brute force approach, this case is not good because O(n^2) */
std::vector<int> twoSum(std::vector<int>& nums, int target) 
{
    int index1, index2 = 0;

    for (size_t i = 0; i < nums.size() - 1; ++i)
    {
        for (size_t j = i+1; j < nums.size(); ++j)
        {
            if((nums[i] + nums[j]) == target) 
            {
                index1 = i;
                index2 = j;
                break;
            }
        }
    }

    return {index1,index2};
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v(n,0);

    for(int& e : v)
        std::cin >> e;

    v = twoSum(v,6);

    for(int& e : v)
        std::cout << e << ' ';

    return 0;
}