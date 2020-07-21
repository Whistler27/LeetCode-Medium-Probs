class Solution {
public:
    bool vis[205][205];
    bool check(vector<vector<char>> &b, int i,int j,int index, string word){
        if(index==word.size()) return true;
        
        if(i<0 || i>=b.size() || j<0 || j>=b[0].size() || b[i][j]!=word[index] || vis[i][j]==true) return false;
        
        vis[i][j]=true;
        if(check(b,i+1,j,index+1,word) || check(b,i-1,j,index+1,word) ||check(b,i,j+1,index+1,word) ||check(b,i,j-1,index+1,word)){
            return true;
        }
        vis[i][j]=false;
        return false;
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(word[0]==board[i][j] && check(board,i,j,0,word)){
                    return true;
                }
            }
        }
        return false;
    }
};