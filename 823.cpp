#define ll long long int
#define mod 1000000007
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& A) {
        ll n=A.size();
        ll ans=0;
       
        sort(A.begin(),A.end());
        unordered_map<ll,ll> mp;
        
        for(int i=0;i<n; i++){
            mp[A[i]]=1;
            for(int j=0;j<i; j++){
                if(A[i]%A[j]!=0) continue;
                ll cur=A[i]/A[j];
                
                if(mp.count(cur)){
                    mp[A[i]]+=((mp[A[j]]%mod)*mp[cur]%mod)%mod;
                }
                else continue;
                
            }
        }
        
        for(auto i:mp){
            ans+=i.second;
            ans%=mod;
        }
        
        return ans;
        
    }
};