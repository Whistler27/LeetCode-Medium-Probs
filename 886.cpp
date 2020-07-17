class Solution {
public:
    vector<int> adj[10005];
    int col[10005];
    bool vis[10005];
    bool dfs(int node,int color){
        col[node]=color;
        vis[node]=1;
        
        for(auto i:adj[node]){
            if(vis[i]){
                if(col[i]==col[node]) return false;   
            }
            else
            dfs(i,1-color);    
            if(col[i]==col[node]) return false;
        }
        return true;
    }
    
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        int m=dislikes.size();
        memset(col,-1,sizeof(col));
        for(int i=0;i<m;i++){
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        
        for(int i=1;i<=N;i++){
            if(!vis[i]){
                if(!dfs(i,0)) return false;
            }
        }
        
        return true;
        
    }
};