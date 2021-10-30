#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
    public:
        vector<int> constructArray(int n, int k) {
            vector<int> v(n);
            
            int x = k + 1, y = 1;

            for(int i = 0; i < k + 1; ++i) {
                v[i] = i % 2 ? x-- : y++;
            }

            for(int i = k+1; i < n; ++i) {
                v[i] = i+1;
            }
            return v;
        }
};

int main() {
    Solution s;
    vector<int> v = s.constructArray(3,2);

    for(auto e : v) {
        cout << e << ' ';
    }

    return 0;
}
