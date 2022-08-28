#include <iostream>
#include <numeric>
#include <vector>

/*
 * We can use a little math formula to obtain the right sum, without using another for loop.
 *
 * S - nums[i] - sumleft
 *
 * Where S is the total sum of the vector, i is the current index (pivot) and sumleft is the
 * total sum from all the numbers that are to the left from our pivot.
 *
 * Complexity is O(N), we need to iterate to find our correct pivot.
 *
 * Problem: https://leetcode.com/problems/find-pivot-index/
 * */

using namespace std;

int pivotIndex(vector<int>& nums)
{
    int suml = 0;
    int sum_total = accumulate(nums.begin(), nums.end(), 0);

    for (int pivot = 0; pivot < nums.size(); ++pivot)
    {
        int sumr = sum_total - nums[pivot] - suml;
        if (suml == sumr)
            return pivot;
        suml += nums[pivot];
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;               // Number of elements.
    vector<int> v(n, 0);

    for (int& element : v)
        cin >> element;

    cout << pivotIndex(v);

    return 0;
}
