class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0, maxs=INT_MIN;
        for (int val : nums){
            cs += val;
            maxs=max(cs,maxs);
            if(cs<0){
                cs=0;
            }
            
        }
        return maxs;
    }
};