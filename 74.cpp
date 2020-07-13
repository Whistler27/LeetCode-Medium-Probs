class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        if(n==0) return false;
        int m=matrix[0].size();
        if(n==0 || m==0) return false;
        int l=0;
        int r=n-1;
        int cur=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(matrix[mid][0]==target) return true;
            else if(matrix[mid][0]<target){
                cur=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        l=cur;
        int start=0,end=m-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(matrix[l][mid]==target) return true;
            else if(matrix[l][mid]>target) end=end-1;
            else start=start+1;
        }
        
        return false;
        
    }
};