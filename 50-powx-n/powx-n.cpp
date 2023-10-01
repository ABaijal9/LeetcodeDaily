class Solution {
public:
   double myPow(double x, int n) {
        double res = 1;
        while (n) {
            if (n % 2) res = n > 0 ? res * x : res / x;
            x = x * x;
            n /= 2;
        }
        return res;class Solution {
public:

double pow1(double x, int n){ //for >= 0
     if(n == 0){
        return 1;
    }
    return x*pow1(x,n-1);
}
double pow2(double x, int n){ //for <= 0
    if(n == 0){
        return 1;
    }
    double ans = 1/ x*pow2(x,n-1);
    return ans;
}

double myPow(double x, int n) {
       if(n >= 0) return pow1(x, n);
       return pow2(x, n*(-1));
    }
};
    }
};