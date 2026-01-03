class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Check if the vector is empty
        if (strs.empty()) return "";

        // Start with the first string as the prefix
        string pref = strs[0];

        // Iterate through all the strings in the vector
        for (int i = 1; i < strs.size(); i++) {
            // Compare character by character and reduce the prefix length
            int j = 0;
            while (j < pref.size() && j < strs[i].size() && pref[j] == strs[i][j]) {
                j++;
            }
            // Shorten the prefix to the matched portion
            pref = pref.substr(0, j);
            
            // If at any point the prefix becomes empty, return ""
            if (pref.empty()) return "";
        }

        return pref;
    }
};
