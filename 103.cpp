/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        int c=0;
        while(!q.empty()){
            int len=q.size();
            vector<int> p;
            while(len>0){
                TreeNode* cur=q.front();
                q.pop();
                
                p.push_back(cur->val);
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
                
                len--;
            }
            
            if(c%2==0) ans.push_back(p);
            else{
                reverse(p.begin(),p.end());
                ans.push_back(p);
            }
            c++;
        }
        return ans;
    }
};