// O(N^2 log(N)) solution first, then O(N^2) below
// https://www.youtube.com/watch?v=0CKUjDcUYYA

#include <iostream>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int best_len = 0;
        string best_s = "";
        int n = s.length();
        for(int mid = 0; mid < n; mid++) {
            for(int x = 0; mid - x >= 0 && mid + x < n; x++) {
                if(s[mid-x] != s[mid+x]) {
                    break;
                }
                int len = 2 * x + 1;
                if(len > best_len) {
                    best_len = len;
                    best_s = s.substr(mid - x, len);
                }
            }
        }
        for(int mid = 0; mid < n - 1; mid++) {
            for(int x = 1; mid - x + 1 >= 0 && mid + x < n; x++) {
                if(s[mid-x+1] != s[mid+x]) {
                    break;
                }
                int len = 2 * x;
                if(len > best_len) {
                    best_len = len;
                    best_s = s.substr(mid - x + 1, len);
                }
            }
        }
        return best_s;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution sol;
    cout << sol.longestPalindrome(s) << '\n';
}
