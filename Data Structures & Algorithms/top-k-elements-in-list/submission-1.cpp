class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> hash_map;
        for(int number: nums) {
            hash_map[number]++;
        }

        std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>, std::greater<std::pair<int,int>>> minHeap;

        for(const auto& pairs: hash_map) {
            int value = pairs.first;
            int frequency = pairs.second;

            minHeap.push({frequency, value});
            if (minHeap.size() > k)
                minHeap.pop();
        }
        vector<int> output;

        while(!minHeap.empty()) {
            output.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return output;
    }
};
