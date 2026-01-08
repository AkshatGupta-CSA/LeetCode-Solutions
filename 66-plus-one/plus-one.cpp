class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length=digits.size();
        int carry=1;
        for(int i=length-1;i>=0;i--)
        {
            digits[i]+=carry;
            carry=digits[i]/10;
            if(i!=0) digits[i]%=10;
        }
        if(digits[0]==10)
        {
            digits[0]=0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};