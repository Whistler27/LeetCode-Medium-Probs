#define ll long long int
class Solution {
public:
    ll gcd(ll a,ll b){  
        if(b==0) return a;
        else return gcd(b,a%b);
    }
    
    ll lcm(ll a,ll b){
        return a*b/gcd(a,b);
    }
    
    ll check(ll mid,ll a,ll b,ll c){
        ll ones=mid/a+mid/b+mid/c;
        ll doub=mid/lcm(a,b) + mid/lcm(b,c) + mid/lcm(a,c);
        
        ll trip=mid/lcm(a,lcm(b,c));
        return ones-doub+trip;
        
    }
    
    int nthUglyNumber(int n, int a, int b, int c) {
        ll l=1;
        ll r=2e9;
        ll ans=0;    
        while(l<r){
           ll mid=(l+r)/2;
            if(check(mid,a,b,c)>=n){
                //if(check(mid,a,b,c)==n) return mid;
                ans=mid;
                r=mid;
            }
            else l=mid+1;
        //    cout << ans << " ";
        }
        
        return l;
        
        
    }
};