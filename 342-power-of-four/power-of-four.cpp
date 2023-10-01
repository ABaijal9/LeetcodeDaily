class Solution {
public:
    bool checker(int n , double count){
    if(count > n) return false;
    if(count == n) return true;
    if(count*4 < INT_MAX) return checker(n, count*4);
    return false;
}
    bool isPowerOfFour(int n) {
        if(n <= 0 || n == 2 || n == 3) return false;
        double t = 1;
        return checker(n, t);
        
    }

};