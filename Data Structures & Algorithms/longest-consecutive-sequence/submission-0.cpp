class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet(nums.begin(), nums.end());
        int longest = 0;

        for(int n:nums) {
            if (!hashSet.contains(n - 1)) {
                int length = 0;
                while (hashSet.contains(n + length)) {
                    length++;
                }
                if (length > longest)
                    longest = length;
            }
        }
        return longest;
    }
};
