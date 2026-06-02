class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestending = nums[0];
        int ans = nums[0];
        int  n = nums.size();
        if(n == 1){
            return nums[0];
        }
        int v1,v2;
        for(int i=1;i<n;i++){
            v1= nums[i];
            v2 = bestending+nums[i];
            bestending = max(v1,v2);
            ans = max(ans,bestending);
            
        }
        return ans;

    }
};