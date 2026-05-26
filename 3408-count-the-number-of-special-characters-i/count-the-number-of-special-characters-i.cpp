class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> lower, upper;

        for(char ch : word)
        {
            if(islower(ch))
                lower.insert(ch);
            else if(isupper(ch))
                upper.insert(ch);
        }

        int count = 0;

        for(char ch : lower)
        {
            if(upper.find(toupper(ch)) != upper.end())
                count++;
        }

        return count;
    }
};