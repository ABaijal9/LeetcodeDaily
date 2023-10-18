class Solution {
public:

bool subsequence(string s, string t, int &i , int &j, int n , int m){
    //base case
    if(i == n){
        return true;
    }
    if( j == m && i !=n) return false;
    //rec case
    if(s[i] == t[j])i++;
    j++;
    return subsequence(s, t, i , j , n, m);
}
    bool isSubsequence(string s, string t) {
        
        int n = s.size();
        int m = t.size();
        int i = 0 ;
        int j = 0 ;
        return subsequence(s, t, i , j , n, m);
    }
};