class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=INT_MIN;
        int n= nums.size();
        int prefix = 0, suffix=0;
        for(int i=0;i<nums.size();i++){
               if(prefix==0) prefix = 1;
               if(suffix==0) suffix=1;
            prefix = prefix*nums[i];
            suffix = suffix*nums[n-i-1];
            prod = max(prod,max(prefix,suffix));
        }
        return prod;
    }
};