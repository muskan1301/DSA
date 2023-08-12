class Solution {
public:
    int maxArea(vector<int>& height) {
        int res=0;
        long long int j = height.size()-1, i=0;
        long long int n = height.size();
        while (i<j)
        {
            int area  = (j-i)*min(height[i],height[j]);
            res = max(res,area);
            if(height[i]<height[j])
                i++;
            else if (height[i]>height[j])
                j--;
            else
                i++;
        }
        return res;
    }
};