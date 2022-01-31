#include <iostream>
#include <stack>

// O(n)
bool isValid(std::string& s) {
    std::stack<char> openBrackets;
    bool valid = true;

    for(size_t i = 0; i < s.size(); ++i) {
        // Push open bracket.
        if(s[i] == '(' or s[i] == '[' or s[i] == '{')
            openBrackets.push(s[i]);
        // We find a close bracket. check if it's the correct one.
        else if(!openBrackets.empty()) {
            char bracket = openBrackets.top();
            openBrackets.pop();

            // Match to its corresponding close brackets, true = match, false = not match.
            // Check ascii table about why increment bracket.
            valid = ++bracket == s[i] or ++bracket == s[i];
        } else {
            return false;
        }

        if(!valid)
            return false;
    }

    // If we have some brackets in our stack, then also is not valid.
    return !openBrackets.empty() ? false : valid;
}

int main()
{
    std::string s;
    std::cin >> s;

    std::cout << isValid(s) << '\n';

    return 0;
}

