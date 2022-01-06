// TIME LIMITE EXCEEDED.
// Slow algorithm from wikipedia used.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string longestPalindrome(string& s) {
    string substr;
    vector<string> palindromes(2,"");

    for(size_t i = 0; i <= s.size(); i += 2)
        s.insert(i, "|");

    int current_pos = 1;
    while(current_pos < s.size())
    {
        int left = current_pos - 1;
        int right = current_pos + 1;

        // Iterate thorugh the left and right, obtaining a palindrome.
        while(left > -1 and right < s.size())
        {
            if(s[left] == s[right])
                // The substraction is done to get the correct position.
                substr = s.substr(left, right - left + 1);
            // If both chars don't match already, just brake, no need to continue checking.
            else break;

            --left;
            ++right;
        }

        // There could be multiple palindromes in the string, just get the longest one.
        palindromes[0] = substr;
        if(palindromes[0].size() > palindromes[1].size())
            palindromes[1] = palindromes[0];
        ++current_pos;
    }

    // std::erase(palindromes[1], '|');
    size_t pos = 0;
    while((pos = palindromes[1].find("|")) != std::string::npos)
        palindromes[1].erase(pos, 1);
    return palindromes[1];
}

int main()
{
    string str;
    cin >> str;

    cout << longestPalindrome(str);

    return 0;
}
