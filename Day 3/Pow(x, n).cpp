class Solution {
public:
    double myPow(double x, int n) {
        double res = pow(x,n);
        if(n<0){
             double res = 1/pow(x,abs(n));
        }
        return res;
    }
};