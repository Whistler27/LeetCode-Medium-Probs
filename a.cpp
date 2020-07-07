class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        string ans;
        int len;
        
        for(int mid=0;mid<n; mid++){
            for(int x=0;mid-x>=0 && mid+x<n; x++){
                if(s[mid-x]!=s[mid+x]) break;
                int cur=2*x+1;
                if(len<cur){
                    len=cur;
                    ans=s.substr(mid-x,len);
                }
            }
        }
        
        for(int mid=0;mid<n;mid++){
            for(int x=0;mid-x+1>=0 && mid+x<n;x++){
                if(s[mid-x+1]!=s[mid+x]) break;
                int cur=2*x;
                if(len<cur){
                    len=cur;
                    ans=s.substr(mid-x+1,len);
                }
            }
        }
        
      //  if(n==1) return s;
        
        return ans;
        
    }
};