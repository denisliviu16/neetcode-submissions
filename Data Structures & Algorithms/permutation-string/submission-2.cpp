class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> freq1(26, 0), freq2(26, 0);
        int k = s1.size();

        for (int i = 0; i < k; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        for (int i = 0; i <= s2.size() - k; i++) {
            if (freq1 == freq2) return true;

            if (i + k < s2.size()) {
                freq2[s2[i] - 'a']--;
                freq2[s2[i + k] - 'a']++;
            }
        }

        return false;
    }
};