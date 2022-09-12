#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

/*
 * Complexity is 0(N).
 *
 * */

using namespace std;

void rotate(vector<int>& nums, int k) {
    // k in range of 0 to arr.length-1
    k = k % nums.size();
    // Reverse array.
    reverse(nums.begin(), nums.end());
    // Reverse the first k elements.
    reverse(nums.begin(), nums.begin() + k);
    // Reverse the remaining numbers, started from k position.
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
