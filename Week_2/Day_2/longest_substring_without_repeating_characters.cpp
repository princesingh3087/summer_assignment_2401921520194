class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> f;
        int low=0;
        int result = 0;
        for(int high = 0;high<s.size();high++){
            f[s[high]]++;
            int k=high-low+1;
            while(f.size()<k){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                }
                low++;
                k=high-low+1;
            }
            if(f.size()==k){
                int length = high-low+1;
                result=max(result,length);
            }
        }
        return result;
        
    }
};