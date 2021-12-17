class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector <int>> pascal;
        for(int i = 0; i < numRows; i++)
        {
            pascal.push_back({});
            for(int j = 0; j <= i; j++)
            {
                if(j == 0 || j == i)
                {
                    pascal[i].emplace_back(1);
                }
                else
                {
                    pascal[i].emplace_back(pascal[i - 1][j - 1] + pascal[i - 1][j]);
                }
            }
        }
        return pascal;
    }
};
