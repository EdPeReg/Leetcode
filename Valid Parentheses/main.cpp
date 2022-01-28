#include <iostream>
#include <stack>

// O(n)
bool isValid(std::string& s) {
    std::stack<char> openBrackets;
    bool valid;

    for(size_t i = 0; i < s.size(); ++i) {
        valid = false;

        // Push open bracket.
        if(s[i] == '(' or s[i] == '[' or s[i] == '{')
            openBrackets.push(s[i]);
        // We find a close bracket. check if it's the correct one.
        else if(openBrackets.size() != 0) {
            char bracket = openBrackets.top();
            openBrackets.pop();

            if(bracket == '(' and ++bracket == s[i]) {
                valid = true;
                continue;
            } else {
                // To match to its closing bracket.
                bracket += 2;
                if(bracket == s[i]) {
                    valid = true;
                } else {
                    valid = false;
                    break;
                }
            }
        } else {
            valid = false;
            break;
        }
    }

    return openBrackets.size() != 0 ? false : valid;
}

int main()
{
    std::string s;
    std::cin >> s;

    std::cout << isValid(s) << '\n';

    return 0;
}

