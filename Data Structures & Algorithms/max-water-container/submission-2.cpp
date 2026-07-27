class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1,  max = 0;
        while (left < right) {
            if (min(heights[left], heights[right]) * (right - left) > max)
                max = min(heights[left], heights[right]) * (right - left);
            if (heights[right] > heights[left])
                left++;
            else if (heights[left] >= heights[right])
                right--;
        }
        return max;
    }
};
