class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int m = s1.size();
        int n = s2.size();

        if (m > n) return false;

        vector<int> s1Freq(26, 0);
        vector<int> Freq(26, 0);

        for (char ch : s1) {
            s1Freq[ch - 'a']++;
        }

        int low = 0;

        for (int high = 0; high < n; high++) {

            Freq[s2[high] - 'a']++;

            if (high - low + 1 > m) {
                Freq[s2[low] - 'a']--;
                low++;
            }

            if (high - low + 1 == m) {
                if (Freq == s1Freq) {
                    return true;
                }
            }
        }

        return false;
    }
};