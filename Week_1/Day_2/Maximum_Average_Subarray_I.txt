class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int low =0 , high =k-1;
        int sum=0;
        double avg=0;
        double result =INT_MIN;
        for(int i =low;i<=high;i++){
            sum = sum+nums[i];
        }
        while(high<n){
            avg = (double)sum/k;
            result = max(result,avg);
            sum = sum - nums[low];
            low++;
            high++;;
            if(high == n){
                break;
            }
            sum = sum+nums[high];
        }
        return result;
    }
};