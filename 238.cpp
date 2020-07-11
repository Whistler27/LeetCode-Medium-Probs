class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref(nums.size());
        pref[0]=1;
        int n=nums.size();
        for(int i=1;i<nums.size(); i++){
            pref[i]=pref[i-1]*nums[i-1];
        }
        
        int suff=1;
        for(int i=nums.size()-1;i>=0;i--){
            pref[i]*=suff;
            suff*=nums[i];
        }
        return pref;
        
    }
};