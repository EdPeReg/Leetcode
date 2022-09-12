#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

void rotate(vector<int>& nums, int k) {
    k = k % nums.size();

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    ifstream input("input.txt");

    string text;
    while (getline(input, text)) {
        vector<int> v;
        int k;

        // You can "comment" a test case if you put a /
        // at the beggining of the line.
        if (text[0] == '/') continue;

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
