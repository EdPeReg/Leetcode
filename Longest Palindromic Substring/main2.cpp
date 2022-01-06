/* Not proud of this code... but it works :] */

#include <iostream>
#include <algorithm>

std::string longestPalindrome(std::string& s) {
    std::string substr1 = "";
    std::string substr2 = "";
    size_t n = s.size();
    int table[n][n];
    int pos1 = 0;
    int pos2 = 0;

    std::fill(*table, *table + n*n, -1);
    // Diagonals.
    for(size_t i = 0; i < n; ++i) {
        table[i][i] = 1;
    }

    // Only two characters.
    for(size_t i = 0; i < n - 1; ++i) {
        // 1 Palindrome, 0 not palindrome.
        if(s[i] == s[i+1])
            table[i][i+1] = 1;
        else
            table[i][i+1] = 0;
    }

    int i = 0;
    int cont = 1;
    // Stop until we reach the last character of the string.
    while(table[0][n-1] == -1)
    {
        // Cont here help us to see in what col we are.
        size_t j = i + cont;
        // Get the correct j position.
        if(table[i][j+1] == -1)
            ++j;
        else
            j += 2;

        // All palindromes satisfy this condition, 1 palindrome, 0 not palindrome.
        if(s[i] == s[j] and table[i+1][j-1] == 1)
            table[i][j] = 1;
        else
            table[i][j] = 0;

        ++i;
        // We end to analize the string, reset values.
        if(j == n-1) {
            i = 0;
            ++cont;
        }
    }

    // Our table has the position of the palindromes found. Iterate in our table to find those positions.
    for(size_t i = 0; i < n; ++i) {
        // Search all the 1 in the columns, the 1s indicates the position of one palindrome.
        for(size_t j = 0; j < n; ++j) {
            // There is always a 1 in the diagonal.
            if(i == j)
                pos1 = i;
            // We found 1
            if(table[i][j] == 1)
                pos2 = j;
        }

        int start = pos1;
        // In order to get the correct position, we do this little math operation.
        int end = pos2 - pos1 + 1;
        substr2 = s.substr(start, end);
        // Save in our vector the longest palindrome.
        if(substr2.size() > substr1.size())
            substr1 = substr2;
    }

    return substr1;
}

int main()
{
    std::string str;
    std::cin >> str;

    std::cout << longestPalindrome(str);

    return 0;
}
