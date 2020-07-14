#define ll long long int
class Solution {
public:
    string largestMultipleOfThree(vector<int>& digits) {
        ll sum=0;
        int n=digits.size();
        map<ll,ll> mp;
        for(int i=0;i<n;i++){
            sum+=digits[i];
            mp[digits[i]]++;
        }
        
        int a[6]={1,4,7,2,5,8};
        int b[6]={2,5,8,1,4,7};
       // cout << sum << " ";
       while(sum%3!=0){
        for(int i=0;i<6;i++){
            if(sum%3==1){
                while(mp[a[i]]>0 && sum%3!=0){
                    mp[a[i]]--;
                    sum=sum-a[i];
                }
            }
            else if(sum%3==2){
                while(mp[b[i]]>0 && sum%3!=0){
                    mp[b[i]]--;
                    sum=sum-b[i];
                }                 
            } 
        }
       }
        
        string ans="";
        for(int i=9;i>=0;i--){
           while(mp[i]>0){
               char c=char(i+'0');
               ans+=c;
               mp[i]--;
           }
            //cout << ans << " ";
        }
        if(ans.size()>=1 && ans[0]=='0') ans="0";
        return ans;
    }
};