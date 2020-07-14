class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int n=A.size();
        int ma=-1;
        for(int i=0;i<n-2;i++){
            ma=max(ma,A[i]);
            if(ma>A[i+2]) return false;
        }
        return true;
    }
};