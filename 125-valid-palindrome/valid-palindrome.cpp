class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            while (i < j && !isalnum(s[i])) {
                i++;
            }

            while (i < j && !isalnum(s[j])) {
                j--;
            }

            // Change capital to small alphabet using isupper
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
            if (isupper(s[j])) {
                s[j] = tolower(s[j]);
            }

            if (s[i] != s[j]) {
                return false;  // Characters do not match, not a valid palindrome
            }

            i++;
            j--;
        }

        return true;  // All characters matched, it's a valid palindrome
    }
};