#include <iostream>
#include <unordered_map>

/*
 * We can use hash map to map characters, the key part to know this, is in this part
 * "Two strings s and t are isomorphic if the characters in s CAN BE REPLACED to get t"
 *
 * But there is also another rule to take in consideration, "No two characters may map to the same character"
 *
 * This is the logic:
 *
 * s = bar, f = foo
 *
 * b -> f | f -> b
 * a -> o | o -> a
 * r -> o | o -> r
 *
 * We map first the string s, when we map it, we see that a -> o and r -> o, that's illegal, that's the
 * second rule.
 *
 * We map the second string t, there we can see that two characters o -> a and o -> r are illegal.
 *
 * Complexity is O(N), both for memory and algorithm.
 *
 * */
using namespace std;

bool isIsomorphic(string s, string t) {
    unordered_map<char, char> mStoT; // map s to t
    unordered_map<char, char> mTtoS; // map t to s

    // Map both strings.
    for (int i = 0; i < s.size(); ++i) {
        mStoT.insert(pair<char, char>(s[i], t[i]));
        mTtoS.insert(pair<char, char>(t[i], s[i]));
    }

    for (int i = 0; i < s.size(); ++i) {
        // Check if our mapping doesn't violate the rules explained above.
        if (mStoT[s[i]] != t[i] or mTtoS[t[i]] != s[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string s1;
    string s2;

    cin >> s1 >> s2;

    cout << isIsomorphic(s1,s2);

    return 0;
}
