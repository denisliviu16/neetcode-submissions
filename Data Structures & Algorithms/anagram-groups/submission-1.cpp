class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<std::string>> output;
        std::map<std::vector<int>, std::vector<std::string>> hash_table;
        for (int i = 0; i < strs.size(); i++) {
            std::vector<int> count(26, 0);
            for (int j = 0; j < strs[i].size(); j++) {
                count[strs[i][j] - 'a'] += 1;
            }
            hash_table[count].push_back(strs[i]);
        }

        for (const auto& pereche : hash_table) {
            output.push_back(pereche.second);
        }

        return output;
    }
};
