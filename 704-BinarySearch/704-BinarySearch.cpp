class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while(l < r)
        {
            int m = (l + r) / 2;
            if (nums[m] >= target)
            {
                r = m;
            }
            else
            {
                l = m + 1;

            }
        }
    if (nums[l] == target)
        {
            return l;
        }
        else
        {
            return -1;
        }
    }
};