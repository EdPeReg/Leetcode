#include <iostream>
#include <algorithm>
#include <deque>

/* The idea is the next, I will have a deque of visited elements, based on that deque, I'll have
 * the correct length.
 * The main idea is to have a buffer where we save the visited elements, and when we found a repeated
 * element, start to delete the elements from the buffer, like this:
 *
 * abcb -> b is repeated
 *  bcb -> b is repeated
 *   cb -> b is not there, continue the algorithm.
 *
 * O(n) and space complexity also O(n)
 * */

int lengthOfLongestSubstring(std::string& s) {
    size_t max = 0;
    std::deque<char> visited;

    for(size_t i = 0; i < s.size(); ++i)
    {
        // Keep poping until we don't have our repeated char.
        while(std::find(visited.begin(), visited.end(), s[i]) != visited.end())
            visited.pop_front();

        visited.push_back(s[i]);
        if(visited.size() > max)
            max = visited.size();
    }

    return max;
}

int main()
{
    std::string str;
    std::cin >> str;

    std::cout << lengthOfLongestSubstring(str) << '\n';

    return 0;
}
