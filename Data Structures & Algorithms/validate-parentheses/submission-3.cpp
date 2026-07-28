class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, int> openBrackets = {{'(', 0}, {'{', 1}, {'[', 2}};
        unordered_map<char, int> closedBrackets = {{')', 0}, {'}', 1}, {']', 2}};
        stack<char> stackBrackets;

        for (int i = 0; i < s.size(); i++) {
            if (openBrackets.contains(s[i])) {
                stackBrackets.push(s[i]);
            } 
            else if (closedBrackets.contains(s[i])) {
                if (stackBrackets.empty() || openBrackets[stackBrackets.top()] != closedBrackets[s[i]]) {
                    return false;
                }
                stackBrackets.pop();
            }
        }

        return stackBrackets.empty();
    }
};