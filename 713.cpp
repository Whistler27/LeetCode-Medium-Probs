#define ll long long int
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        ll cur=1;
        int l=0,r=0;
        ll ans=0;
        while(r<n){
            cur*=nums[r];
            while(l<=r && cur>=k){
                cur/=nums[l++];
            }
            
            ans+=(r-l+1);
            r++;
            
        }
        return ans;
        
    }
};