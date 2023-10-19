class Solution {
public:

    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;

        while(i < j){
            while( !isalnum(s[i]) && i < j) i++;
            while( !isalnum(s[j]) && i < j) j--;
            if(s[i] >= 65 && s[i] <= 90) s[i] = s[i] + 32;
            if(s[j] >= 65 && s[j] <= 90) s[j] = s[j] + 32;
                    if(s[i] != s[j]) return false;  
        i++;
        j--;
        }
        return true;
    }
};

