#define ll long long int
class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        bool val=next_permutation(s.begin(),s.end());
        
        if(!val) return -1;
        else{
            ll ans=0;
            ll ten=1;
            for(int i=s.size()-1;i>=0;i--){
                ll cur=(s[i]-'0');
                ans+=(cur)*(ten);
                ten*=10;
            }
            if(ans>INT_MAX) ans=-1;
            return ans;
        }
        
    }
};