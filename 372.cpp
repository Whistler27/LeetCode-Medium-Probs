#define ll long long int
#define mod 1337
class Solution {
public:
    
ll mpow(ll base, ll exp){
    if(exp==0) return 1;
    if(exp==1) return base%mod;
    
    return (mpow(base%mod,exp/2)*mpow(base%mod,exp-exp/2))%mod;
    
}
    
    int superPow(int a, vector<int>& b) {
        ll ans=1;
        
        for(int i=0;i<b.size(); i++){
            ans=(mpow(ans,10)%mod)*(mpow(a%mod,b[i])%mod)%mod;
            ans%=mod;
        }       
        
        return ans;
        
    }
};