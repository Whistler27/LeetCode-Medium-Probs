class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        for(int i=0;i<32; i++){
            int l=(a&(1<<i));
            int r=(b&(1<<i));
            int p=(c&(1<<i));
            
            if(p!=0){
                
               if(l==0 && r==0) ans++;
            }
            else{
                if(l!=0 && r!=0) ans+=2;
                else if(l!=0 && r==0 || l==0 && r!=0) ans++;
            }
               
            
        }
        return ans;
    }
};