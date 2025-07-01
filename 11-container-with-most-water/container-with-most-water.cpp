class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int final_area=0;
        while(i<j)
        {
            int var_area=min(height[i],height[j])*(j-i);
            final_area=max(var_area,final_area);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return final_area;
    }
};
