class Solution {
public:
    int maxTurbulenceSize(vector<int>& A) {
        int n=A.size();
        if(n==0) return 0;
        int ans=1;
        if(n==1) return 1;
        int cur=1;
        
        for(int i=1;i<n; i++){
           if(i%2==0){
               if(A[i]<A[i-1]) cur++;
               else cur=1;
           }
           else{
               if(A[i]>A[i-1]) cur++;
               else cur=1;   
           }
            ans=max(ans,cur);   
        }
        
        cur=1;
        for(int i=1;i<n; i++){
           if(i%2!=0){
               if(A[i]<A[i-1]) cur++;
               else cur=1;
           }
           else{
               if(A[i]>A[i-1]) cur++;
               else cur=1;   
           }
            ans=max(ans,cur);   
        }
        
        return ans;
    }
};