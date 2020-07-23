class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        
        int xo=0;
        for(int i=0;i<n;i++) xo=xo^nums[i];
        int p=-1;
        for(int i=0;i<32;i++){
            if((xo&(1<<i))){
                p=i;
                break;
            }
        }
        
        
        int l=0,r=0;
        for(int i=0;i<n;i++){
            if((nums[i]&(1<<p))) l=l^nums[i];
            else r=r^nums[i];    
        }
        
        
        ans.push_back(l);
        ans.push_back(r);
        return ans;
        
    }
};