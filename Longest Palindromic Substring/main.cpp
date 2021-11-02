#include <iostream>
#include <vector>

using namespace std;

bool is_palindrome(string& substr)
{
    int right = substr.size() - 1;
    for(size_t i = 0; i < substr.size() / 2; ++i) {
        if(substr[i] != substr[right]) return false;
        --right;
    }
    return true;
}

string longestPalindrome(string& s) {
    string substr;
    vector<string> palindromes(2,"");
    size_t left = 0, i = 0;

    while(i < s.size())
    {
        substr += s[i];
        if(is_palindrome(substr))
        {
            palindromes[0] = substr;
            if(palindromes[0].size() > palindromes[1].size())
                palindromes[1] = palindromes[0];
        }

        if(++i == s.size()) {
            palindromes[0] = "";
            substr = "";
            i = ++left;
        }
    }

    return palindromes[1];
}

int main()
{
    string str;
    cin >> str;

    cout << longestPalindrome(str);

    return 0;
}
