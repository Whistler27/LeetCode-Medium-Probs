#define ld long double
#define ll long long int
double POW(double base,ll exp){
    double result = 1.0;
    while (exp > 0){
        if (exp&1)
            result = ((double)result * base*(1.0));
        base = ((double)base * base);
        exp >>= 1;
        //cout << result << " ";
    }
    return result;
}

class Solution {
public:
    double myPow(double x, int n) {
        if(x==0) return 0;
        if(n<0){
            double ans=POW(x,abs(n));
            ans=1.0/ans;
            return ans;
        }
        return POW(x,n);        
        
    }
};