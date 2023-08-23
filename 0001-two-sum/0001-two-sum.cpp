class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int first = nums[i];
            int second = target-first;
            if(mpp.find(second)!=mpp.end()){
                return {mpp[second],i};
            }
            mpp[first] = i;
        }
        return {-1,-1};
    }
};