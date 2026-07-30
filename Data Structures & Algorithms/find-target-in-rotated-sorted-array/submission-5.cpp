class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] > nums[r]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }

        auto it1 = lower_bound(nums.begin(), nums.begin() + l, target);
        if (it1 != nums.begin() + l && *it1 == target) {
            return it1 - nums.begin();
        }

        auto it2 = lower_bound(nums.begin() + l, nums.end(), target);
        if (it2 != nums.end() && *it2 == target) {
            return it2 - nums.begin();
        }
        
        return -1; 
    }
};