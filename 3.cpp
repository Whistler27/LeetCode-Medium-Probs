class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int ans=0;
        
        unordered_map<char,int> mp;
        int i=0,j=0;
        while(j<s.size()){
            if(mp[s[j]]==0){
                mp[s[j]]++;
                if(mp.size()>ans) ans=mp.size();
                j++;
            }
            else{
                mp.erase(s[i]);
                i++;
            }
        }
        
        return ans;
        
    }
};