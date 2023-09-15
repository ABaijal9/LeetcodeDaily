class Solution {
public:
    
    string finalString(string s){
        string t = "";
        for(auto it: s){
            if(it != 'i') t+= it;
            else reverse(t.begin(), t.end());
        }
        return t;      
    }
};