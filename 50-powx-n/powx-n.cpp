class Solution {
public:
double poww(double x, int n){
    // base case
    if(n == 0) return 1;
    // rec case
    double res = pow(x,n/2);
    res = res*res;
    if(n%2  == 0) return res;
    return x* res;
}
   double myPow(double x, int n) {
        if(n == 0) return 1;
        if(x == 0) return 0;
        if(n == INT_MIN){
            return 1/(x * poww(x, -(n + 1)));
        }
       // x^-n -> 1/x^n
       if ( n < 0) {
          n = -n;
           return 1/poww(x,n);
       }
       return poww(x, n);
    }
};