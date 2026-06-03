class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int p = nums.size();
        vector<int> neg;
        vector<int> pos;
        for(int i=0;i<p;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        int i=0,j=0;
        int m = neg.size();
        int n = pos.size();
        vector<int> merge(m+n);
        int idx = 0;
        for(int i=0;i<m;i++){
            neg[i] = neg[i]*neg[i];
            
        }
        reverse(neg.begin(),neg.end());
        for(int j=0;j<n;j++){
            pos[j]= pos[j]*pos[j];
        }
        while(i<m && j<n){
            if(neg[i]<pos[j]){
                merge[idx]=neg[i];
                idx++;
                i++;
            }
            else{
                merge[idx]=pos[j];
                j++;
                idx++;
            }

        }
        while(j<n){
            merge[idx]=pos[j];
            j++;
            idx++;
        }
        while(i<m){
            merge[idx]=neg[i];
            i++;
            idx++;
        }
        return merge;

    }
};