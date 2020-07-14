class Solution {
public:
    int smallestRangeII(vector<int>& A, int K) {
        int n=A.size();
        sort(A.begin(),A.end());
        if(n==1) return 0;
        int ans=A[n-1]-A[0];
        int k=K;
        for(int i=0;i<n-1; i++){
            int ma=max(A[i]+k,A[n-1]-k);
            int mi=min(A[0]+k,A[i+1]-k);
            ans=min(ans,ma-mi);
        }
        
        return ans;
    }
};