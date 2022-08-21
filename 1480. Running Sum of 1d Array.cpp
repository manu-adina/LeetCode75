class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if(nums.size() == 1) return nums;
        
        vector<int> ans;
        ans.push_back(nums[0]);
        
        for(size_t i = 1; i < nums.size(); i++) {
            int currSum = nums[i] + ans.back();
            ans.push_back(currSum); 
        }
        
        return ans;
    }
};
