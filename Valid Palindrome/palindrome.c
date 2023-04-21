#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char* s) {
    bool result = true;

    int i = 0; 
    int j = strlen(s) - 1;
    while (i < j) {
        if (!isalnum(s[i])) {
            ++i;
        }
        if (!isalnum(s[j])) {
            --j;
        }
        if (isalnum(s[i]) && isalnum(s[j])) {
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            ++i;
            --j;
        }
    }

    return result;
}

int main() {
    char s1[] = "A man, a plan, a canal: Panama";
    char s2[] = "race a car";
    char s3[] = " ";
    assert(isPalindrome(s1) == true);
    assert(isPalindrome(s2) == false);
    assert(isPalindrome(s3) == true);
}