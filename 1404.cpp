class Solution {
public:
    int numSteps(string s) {
        
        int ans=0;
        while(s.length()>1){
            if(s[s.length()-1]=='0'){
                s=s.substr(0,s.length()-1);
                
            }   
            else{
                bool f=0;
                for(int i=s.length()-1;i>=0;i--){
                    if(s[i]=='0'){
                        s[i]='1';
                        f=1;
                        break;
                    }
                    else s[i]='0';
                }
                if(f==0) s='1'+s;
            }
            ans++;
            
        }
        return ans;
        
    }
};