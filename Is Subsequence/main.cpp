#include <iostream>

/*
 * We use two pointers, one pointer will be for s, the other
 * pointer will be for t.
 *
 * If s pointer reach the end before t pointer, it means that
 * s is a subsequence of t, this means that s pointer should have
 * the same size of s.
 *
 * Complexity is O(n), we go through t.
 * */

using namespace std;

bool isSubsequence(string s, string t) {
    int spos = 0;
    bool found = false;

    for (int i = 0; i < t.size(); i++) {
        if (s[spos] == t[i]) {
            spos++;
        }
    }

    // spos will be the same size as s because all s' characters were analized.
    return spos == s.size() ? true : false;
}

int main() {

    string s = "abc";
    string t = "ahbgdc";

    cout << isSubsequence(s,t);

    return 0;
}
