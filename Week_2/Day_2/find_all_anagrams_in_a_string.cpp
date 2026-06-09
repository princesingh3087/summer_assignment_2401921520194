class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if (m > n) return ans;

        vector<int> pFreq(26, 0);
        vector<int> winFreq(26, 0);

        for (char ch : p) {
            pFreq[ch - 'a']++;
        }

        int low = 0;

        for (int high = 0; high < n; high++) {
            winFreq[s[high] - 'a']++;

            if (high - low + 1 > m) {
                winFreq[s[low] - 'a']--;
                low++;
            }

            if (high - low + 1 == m) {
                if (winFreq == pFreq) {
                    ans.push_back(low);
                }
            }
        }

        return ans;
    }
};
