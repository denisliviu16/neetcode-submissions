class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(const auto& str: strs) {
            encoded += std::to_string(str.size()) + "#" + str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        while(i < s.size()) {
            int j = i;
            while (s[j] != '#')
                j++;
            decoded.push_back(s.substr(j + 1,stoi(s.substr(i, j))));
            i = stoi(s.substr(i, j)) + j + 1;
        }

        return decoded;
    }
};
