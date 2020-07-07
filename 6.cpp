class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        string st[numRows];
        bool f=1;
        int cnt=0;
        int i=0;
        if(numRows==1) return s;
        else if(numRows==2){
            int i=0;
            string ans;
            while(i<n){
                ans+=s[i];
                i+=2;
            }
            
            i=1;
            while(i<n){
                ans+=s[i];
                i+=2;
            }
            return ans;
        }
        while(i<n){
            if(cnt==numRows && f==1){
                cnt=0;
                f=0;
                st[numRows-2-cnt]+=s[i];
            }
            else if(cnt==numRows-2 && f==0){
                cnt=0;
                st[cnt]+=s[i];      
                f=1;
            }
            else if(f==1){
                st[cnt]+=s[i];
            }
            else if(f==0) st[numRows-2-cnt]+=s[i];
            i++;
            cnt++;
        }
        
        string ans;
        for(int i=0;i<numRows; i++) ans+=st[i];
        return ans;
        
    }
};