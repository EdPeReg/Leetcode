// https://leetcode.com/problems/perfect-number

#include <iostream>
#include <vector>

using namespace std;

bool checkPerfectNumber(int num) {
    vector<int> perfect_numbers {6, 28, 496, 8128, 33550336};
    for(const auto& pn : perfect_numbers) {
        if(num == pn) return true;
    }
    return false;
}

int main() {
    cout << checkPerfectNumber(8);
    return 0;
}
