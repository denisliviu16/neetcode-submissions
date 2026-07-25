class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) return false;

        std::unordered_map<char, int> s_hash_table;
        std::unordered_map<char, int> t_hash_table;

        for (int i = 0; i < s.length(); i++) {
            s_hash_table[s[i]]++;
            t_hash_table[t[i]]++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (s_hash_table[s[i]] != t_hash_table[s[i]])
                return false;
        }

        return true;
    }
};
