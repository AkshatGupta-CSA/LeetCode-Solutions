class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int len = s.length();
        string result;
        
        for (int i = len - 1, l = 0; i >= 0; --i) {
            char c = s[i];
            if (c == '-') continue;
            result += toupper(c);
            if (++l == k) {
                result += '-';
                l = 0;
            }
        }
        
        if (result.length() > 0 && result.back() == '-') 
            result.pop_back();
        
        reverse(result.begin(), result.end());
        return result;
    }
};
