#include <iostream>
#include <numeric>
#include <vector>

/*
 * Basically we will iterate all the array to find the pivot, so the pivot will be the first
 * , then second, then third and so on.
 *
 * When we are iterating the array, we can at the same time get the sum of all elements that
 * are left to our pivot.
 *
 * Also we can get the summ of all elements that are right to our pivot using accumulate.
 *
 * It seems that the complexity is O(N^2) because I think that accumulate complexity is O(N).
 *
 * Problem: https://leetcode.com/problems/find-pivot-index/
 * */

using namespace std;

int pivotIndex(vector<int>& nums)
{
    int suml = 0;

    for (int pivot = 0; pivot < nums.size(); ++pivot)
    {
        if (pivot != 0)
            suml += nums[pivot - 1];

        // Indicate out start using our pivot index + 1, the 1 is to not include the current index.
        int sumr = accumulate(nums.begin() + pivot + 1, nums.end(), 0);
        if (suml == sumr)
            return pivot;
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
