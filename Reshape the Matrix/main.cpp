// https://stackoverflow.com/questions/5134555/how-to-convert-a-1d-array-to-2d-array
// https://stackoverflow.com/questions/2151084/map-a-2d-array-onto-a-1d-array
// https://leetcode.com/problems/reshape-the-matrix/submissions/

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
    vector<int> d1;
    vector< vector<int> > d2(r, vector<int>(c));

    for(const auto& r : nums) {
        for(const auto& c : r) {
            d1.push_back(c);
        }
    }

    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            try {
                d2[i][j] = d1.at((i*c)+j);
            } catch(const exception& e) {
                return nums;
            }
        }
    }

    return d2;
}

int main() {
    vector< vector<int> > v = { {1,2}, {3,4} };
    vector< vector<int> > r = matrixReshape(v,2,4);

    for(auto e : r) {
        for(auto el : e) {
            cout << el << " ";
        }
        cout << '\n';
    }

    return 0;
}
