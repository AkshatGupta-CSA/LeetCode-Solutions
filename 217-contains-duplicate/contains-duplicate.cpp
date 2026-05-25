class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.count(nums[i]))   return true;
            mpp.insert(nums[i]);
        }
        return false;
    }
};