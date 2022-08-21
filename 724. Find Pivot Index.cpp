class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        
        int totalSum = 0;
        for(std::size_t i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }
        
        int leftSum = 0;
        for(std::size_t i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i];
            if(rightSum == leftSum) return i;
            leftSum += nums[i];
        }
        
        return -1;
    }
};
