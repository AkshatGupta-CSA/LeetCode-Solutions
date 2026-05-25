class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mpp;
        for(auto it:nums)
        {
            if(mpp.count(it))   return true;
            mpp.insert(it);
        }
        return false;
    }
};