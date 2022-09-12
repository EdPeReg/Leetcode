#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

void rotate(vector<int>& nums, int k) {
    for (int i = 0; i < k; ++i) {
        nums.insert(nums.begin(), nums[nums.size()-1]);
        nums.pop_back();
    }
}

int main() {
    ifstream input("input.txt");

    string text;
    while (getline(input, text)) {
        vector<int> v;
        int k;

        // Split each word with space as delimiter.
        stringstream ss(text);
        string word;
        while (ss >> word) {
            v.push_back(stoi(word));
        }

        // Read k
        getline(input, text);
        k = stoi(text);
        rotate(v,k);

        for (auto& e : v) {
            cout << e << ' ';
        }
        cout << '\n';
    }

    input.close();

    return 0;
}
