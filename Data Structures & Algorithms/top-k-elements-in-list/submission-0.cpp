class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> hash_map;
        for (int number: nums) {
            hash_map[number]++;
        }

        std::priority_queue<std::pair<int, int>,std::vector<std::pair<int,int>>,std::greater<std::pair<int,int>>> minHeap;
        for (const auto& pereche : hash_map) {
            int numar = pereche.first;
            int frecventa = pereche.second;

            minHeap.push({frecventa, numar});

            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        std::vector<int> rezultat;
        while(!minHeap.empty()) {
            rezultat.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return rezultat;
    }
};
