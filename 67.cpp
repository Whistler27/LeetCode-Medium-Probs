class Solution {
public:
    string addBinary(string a, string b) {
        
        int sa=a.size();
        int sb=b.size();
        
        string z="";
        for(int i=0;i<abs(sb-sa);i++) z+='0';
        if(sa<sb) a=z+a;
        else if(sa>sb) b=z+b;
        
        int last=0;
        string ans="";
        for(int i=a.size()-1;i>=0;i--){
            int x=a[i]-'0';
            int y=b[i]-'0';
            int sum=x+y+last;
            if(sum<=1){
                char c=sum+'0';
                ans=c+ans;
                last=0;
            }
            else if(sum==2){
                ans='0'+ans;
                last=1;
            }
            else{
                ans='1'+ans;
                last=1;
            }
        }
        
        if(last) ans='1'+ans;
        return ans;
        
    }
};