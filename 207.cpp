class Solution {
public:
    
    bool fun(vector<int> adj[],vector<int> &indg,int n){
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indg[i]==0) q.push(i);
        }
        int cnt=0;
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            
            for(auto i:adj[cur]){
                indg[i]--;
                if(indg[i]==0) q.push(i);
            }
            cnt++;
        }
        
        if(cnt==n) return 1;
        return 0;
    }
    
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       vector<vector<int>> p=prerequisites;
        int n=numCourses;
        int m=p.size();
        vector<int> adj[n];
        vector<int> indg(n,0);
        for(int i=0;i<m;i++){
            adj[p[i][1]].push_back(p[i][0]);
            indg[p[i][0]]++;
        }
        
        if(fun(adj,indg,n)) return 1;
        return 0;
        
    }
};