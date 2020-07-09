class Solution {
public:
    
    unordered_map<int,int> mp;
    
    int integerReplacement(int n) {
        
        if(n==1) return 0;
        if(mp.count(n)) return mp[n];
        if(n%2==0){
            mp[n]=1+integerReplacement(n/2);
        }
        else{
            mp[n]=2+min(integerReplacement((n)/2),integerReplacement((n)/2+1));
        }
        
        return mp[n];
    }
};