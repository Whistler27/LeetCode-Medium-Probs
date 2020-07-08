class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
        int z[32],o[32];
        memset(z,0,sizeof(z));
        memset(o,0,sizeof(o));
        
        for(int i=0;i<32; i++){
            for(int j=0;j<n; j++){
                if((nums[j]&(1<<i))) z[i]++;
                else o[i]++;
            }
        }
        
        int ans=0;
        for(int i=0;i<32; i++) ans+=z[i]*o[i];
        return ans;
        
    }
    
};