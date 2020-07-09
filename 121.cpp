class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int n=prices.size();
        if(n==0) return 0;
        int pref[n],suff[n];
        memset(pref,0,sizeof(pref));
        memset(suff,0,sizeof(suff));
        
        pref[0]=prices[0];
        suff[n-1]=prices[n-1];
        
        for(int i=1;i<n; i++){
            pref[i]=min(pref[i-1],prices[i]);
        }
        
        for(int i=n-2;i>=0;i--){
            suff[i]=max(suff[i+1],prices[i]);
        }
        
        for(int i=0;i<n; i++){
            ans=max(ans,suff[i]-pref[i]);
        }
        
        return ans;
        
    }
};