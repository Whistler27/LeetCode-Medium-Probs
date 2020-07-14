#define ll long long int
class Solution {
public:
    int reachNumber(int target) {
       target=abs(target);
        ll sum=0;
        ll i=1;
        while(1){
            sum+=i;
            if(sum==target) return i;
            if(sum>target) break;
            i++;
        }
        
        ll diff=i*(i+1)/2-target;
        if(diff%2==0) return i;
        else{
            
            if((i+1)%2!=0) return i+1;
            else return i+2;
            
        }
        
    }
};