#define ll long long int
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       ll sum=0,sum2=0;
        ll n=nums.size();        
        for(int i=0;i<nums.size(); i++){
            sum+=nums[i];
            sum2+=nums[i]*nums[i];
        }
        
        ll a=n*(n+1)/2-sum;
        ll b=n*(n+1)*(2*n+1)/6-sum2;
        int a1=(b/a-a)/2;
        int a2=(a+b/a)/2;
        vector<int> ans{a1,a2};
        return ans;
        
    }
};