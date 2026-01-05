class Solution {
public:
    int strStr(string haystack, string needle) {
        int pref=needle.size();
        if(haystack.empty())   return -1;
        if(needle.empty())   return -1;
        if(needle.size()>haystack.size()) return -1;
        for(int i=0;i<=(haystack.size()-needle.size());i++)
        {
            if(haystack.substr(i,needle.size())==needle)   return i;
        }
        return -1;
    }   
};