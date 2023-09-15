class Solution {
public:
    void sol(string& s, int pos, int n){
        if( pos >= n) return;
        
        if(s[pos] == 'i'){
            reverse(s.begin(), s.begin()+pos);
            s.erase(s.begin() + pos);
            return sol(s, pos,n);
        }
        return sol(s, pos+1, n);
    }
    
    string finalString(string s){
        sol(s,0,s.size());
        return s;      
    }
};