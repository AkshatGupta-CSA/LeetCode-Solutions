class Solution {
public:
    void sortColors(vector<int>& nums) {
       int x=0;
       int y=0;
       int z=0;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==0)  x++;
        else if(nums[i]==1)  y++;
        else  z++;
       }
       int j=0;
       for(x;x>0;x--)
       {
        nums[j]=0;
        j++;
       }
       for(y;y>0;y--)
       {
        nums[j]=1;
        j++;
       }
       for(z;z>0;z--)
       {
        nums[j]=2;
        j++;
       }
    }
};