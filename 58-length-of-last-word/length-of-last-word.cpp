class Solution {
public:
    int lengthOfLastWord(string s) {
        int Lword = 0;
        if (s.empty())
            return 0;
        int size = s.size() - 1;
        while (size>=0) {
            if (s[size] != ' ') {
                Lword++;
                size--;
            } else if (s[size] == ' ' && Lword == 0) {
                size--;
                continue;
            } else if (s[size] == ' ' && Lword != 0)
                return Lword;
        }
        return Lword;
    }
};