class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int last_len = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == ' ') continue;
            int temp_len = 0;
            while(s[i] != ' ' and i<n){
                temp_len += 1;
                i++;
                }
                last_len = temp_len;
        }
        return last_len;    
    }
};