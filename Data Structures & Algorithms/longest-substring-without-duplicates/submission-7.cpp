class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> lastSeen;
        int left = 0, maxLen = 0;
        for (int right = 0; right < s.size(); right++) {

            while(lastSeen.contains(s[right])) {
                lastSeen.erase(s[left]);
                left++;
            }

            lastSeen.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
