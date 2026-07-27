class Solution {
public:
    bool isPalindrome(string s) {
        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return std::tolower(c); });
        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) { return !std::isalnum(c); }), s.end());

        int i = 0;
        bool palindrome = true;
        while (i < s.size() / 2 && palindrome == true) {
            if (s[i] != s[s.size() - 1 - i])
                palindrome = false;
            i++;
        }

        return palindrome;
    }
};