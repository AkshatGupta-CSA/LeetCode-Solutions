class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        long long sum=0;
        long long prev=0;
        for(int num:nums)
        {
            int gap=num-prev-1;
            int count=min(k,gap);
            int current=prev+1;
            while(count>0)
            {
                sum+=current;
                current++;
                k--;
                count--;
            }
            if(k==0)    return sum;
            prev=num;
        }
        long long current = prev + 1;
        while (k > 0) {
            sum += current;
            current++;
            k--;
        }
        return sum;
    }
};