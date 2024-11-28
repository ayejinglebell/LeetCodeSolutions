class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSubarray = nums[0];
        int maxSubarray = nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            //Kadane's algorithm
            curSubarray = max(nums[i], nums[i]+curSubarray);
            maxSubarray = max(maxSubarray, curSubarray);
        }
        return maxSubarray;   
    }
};
