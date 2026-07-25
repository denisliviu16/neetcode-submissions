class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hash_table;
        for (int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];
            if (hash_table.contains(difference))
                return {hash_table[difference], i};
            else
                hash_table[nums[i]] = i;
        }

        return {0, 0};
    }
};
