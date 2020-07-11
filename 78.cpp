class Solution {
public:
    
    map<vector<int>,int> mp;
    vector<vector<int>> ans;
    
    void per(vector<int>& nums,vector<int>& cur,int l,int r){
       if(mp[cur]==0){
           ans.push_back(cur); 
            mp[cur]++;
       }
 
        for(int i=l;i<nums.size(); i++){
            cur.push_back(nums[i]);
            per(nums,cur,i+1,r);
            cur.pop_back();
        }
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();
        int n=nums.size();
        vector<int> cur;
        cur.clear();
        
        per(nums,cur,0,n-1);
       
        return ans;
        
    }
};