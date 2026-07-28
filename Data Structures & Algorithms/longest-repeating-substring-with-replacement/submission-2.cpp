class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, maxf = 0, length = 0;
        unordered_map<char, int> frequency_map;

        for(int right = 0; right < s.size(); right++) {
            frequency_map[s[right]]++;
            maxf = max(maxf, frequency_map[s[right]]);
            
            while(right - left + 1 - maxf > k) {
                frequency_map[s[left]]--;
                left++;
            }
            
            length = max(length, right - left + 1);
        }
        return length;
    }
};
