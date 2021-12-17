class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), i, j, ans = INT_MIN, sum = 0;
        for(i = 0; i < n; i++)
        {
            sum = nums[i];
            ans = max(ans, sum);
            for(j = i + 1; j < n; j++)
            {
                sum += nums[j];
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};
