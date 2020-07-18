class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        vector<int> ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;
        
        for(auto i:mp){
            if(minheap.size()<k){
                minheap.push({i.second,i.first});
                
            }
            else{
                int num=minheap.top().second;
                int freq=minheap.top().first;
                
                if(i.second>freq){
                    minheap.pop();
                    minheap.push({i.second,i.first});
                }
                
            }
            
        }
        
        while(!minheap.empty()){
            ans.push_back(minheap.top().second);
            minheap.pop();
        }
        
        return ans;
        
    }
};