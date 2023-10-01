class Solution {
public:
bool checker(int n , double count){
    if(count > n) return false;
    if(count == n) return true;
    if(count*3 < INT_MAX) return checker(n, count*3);
    return false;
}
    bool isPowerOfThree(int n) {
        if(n <= 0 || n == 2) return false;
        double t = 1;
        return checker(n, t);
        
    }
};