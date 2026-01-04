class Solution {
public:
    bool isValid(string s) {
        vector<char> result;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                result.push_back(s[i]);
            if (s[i] == ')') {
                if (!result.empty() && result.back() == '(')
                    result.pop_back();
                else
                    return false;
            }
            if (s[i] == '}') {
                if (!result.empty() && result.back() == '{')
                    result.pop_back();
                else
                    return false;
            }
            if (s[i] == ']') {
                if (!result.empty() && result.back() == '[')
                    result.pop_back();
                else
                    return false;
            }
        }
        if (result.empty())
            return true;
        else
            return false;
    }
};