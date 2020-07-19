class Solution {
public:

    bool check(vector<int> adj[],int n,vector<int> &ind,vector<int> &ans){
        queue<int> q;
        for(int i=0;i<n;i++){
            if(ind[i]==0) q.push(i);
        }
        
        int count=0;
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            
            for(auto a:adj[cur]){
                ind[a]--;
                if(ind[a]==0) q.push(a);
            }
            ans.push_back(cur);
            count++;
        }
        
        if(count!=n) return 0;
        return 1;
        
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=prerequisites.size();
        vector<vector<int>> p=prerequisites;
        vector<int> adj[numCourses];
        vector<int> ind(numCourses,0);
        
        for(int i=0;i<n;i++){
            adj[p[i][1]].push_back(p[i][0]);
            ind[p[i][0]]++;
        }
        
        vector<int> ans;
        if(check(adj,numCourses,ind,ans)) return ans;
        ans.clear();
        return ans;
        
    }
};