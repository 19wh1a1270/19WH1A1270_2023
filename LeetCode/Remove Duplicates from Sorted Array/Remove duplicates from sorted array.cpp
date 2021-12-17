class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c = 0, n = 0;
        for(auto i = nums.begin(); i != nums.end(); i++)
        {
            n++;
            if(*i == *(i + 1))
            {
                *i = INT_MAX;
                c++;
            }
        }
        sort(nums.begin(), nums.end());
        return n - c;
    }
}
