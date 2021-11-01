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
 * */

int lengthOfLongestSubstring(std::string& s) {
    int max = 0;
    std::deque<char> visited;

    for(size_t i = 0; i < s.size(); ++i)
    {
        // Get the position of the element that we want to check if it's already visited.
        auto pos = std::find(visited.begin(), visited.end(), s[i]);

        // If not visited, insert it.
        if(pos == visited.end()) {
            visited.push_back(s[i]);
        }
        else
        {
            // We insert it again because we will delete the left elements.
            visited.push_back(s[i]);

            // If there is a repeated char, just pop the characters until the repeated char is not there.
            while(visited[0] != visited[visited.size() - 1])
                visited.pop_front();
            // Pop the repeated char.
            visited.pop_front();
        }

        if(visited.size() > max) {
            max = visited.size();
        }
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
