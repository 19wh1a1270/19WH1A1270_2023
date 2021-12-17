#include<bits/stdc++.h>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i, c  = 0, n = 0;
        for(auto i = nums.begin(); i != nums.end(); i++)
        {
            n++;
            if(*i == val)
            {
                *i = INT_MAX;
                c++;
            }
        }
        sort(nums.begin(), nums.end());
        return n - c;
    }
};
