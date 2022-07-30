#include <iostream>
#include <vector>
#include <algorithm>

/*
 * I think this is O(N^2), because we have the two for loops next
 * each other, and they are iterating until N.
 *
 * The buffer.clear() is O(N), but at that point we have
 * 0(N^2 + N) , we take the max value, which is O(N^2).
 * */

using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<char> buffer;
    int max = 0;

    for(int i = 0; i < s.size(); ++i)
    {
        buffer.push_back(s[i]);

        for(int j = i+1; j < s.size(); ++j)
        {
            // Find the letter in the buffer.
            if(find(buffer.begin(), buffer.end(), s[j]) != buffer.end())
                break;
            buffer.push_back(s[j]);
        }

        if(buffer.size() > max)
            max = buffer.size();

        buffer.clear();
    }

    return max;
}

int main()
{
    string str;
    cin >> str;

    cout << lengthOfLongestSubstring(str) << '\n';
    return 0;
}
