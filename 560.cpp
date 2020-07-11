#define ll long long int
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<ll,ll> mp;
        mp[0]=1;
        ll pref[n],ans=0;
        memset(pref,0,sizeof(pref));
        pref[0]=nums[0];
        mp[pref[0]]++;
        if(nums[0]==k) ans++;
        for(int i=1;i<n; i++){
            pref[i]=pref[i-1]+nums[i];
            
            int req=pref[i]-k;
            
            if(mp.find(req)!=mp.end()) ans+=mp[req];
            //cout << ans << " ";
            mp[pref[i]]++;
        }
        
        return ans;
    }
};