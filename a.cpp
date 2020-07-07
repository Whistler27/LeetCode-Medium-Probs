class Solution {
public:
    
    void sum(set<vector<int>> &s,vector<int> &a, vector<int> &cur,int target,int ind){
     if(target<0) return;
        if(target==0) s.insert(cur);
        
        if(ind==a.size()) return;
        if(target-a[ind]>=0){
            cur.push_back(a[ind]);
            sum(s,a,cur,target-a[ind],ind+1);
            cur.pop_back();
        }
               
        sum(s,a,cur,target,ind+1);
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        set<vector<int>> s;
        vector<int> cur;
        sum(s,candidates,cur,target,0);
        
        vector<vector<int>> ans;
        for(auto i:s) ans.push_back(i);
        return ans;
        
    }
};