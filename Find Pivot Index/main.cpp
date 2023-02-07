#include <iostream>
#include <numeric>
#include <vector>

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
