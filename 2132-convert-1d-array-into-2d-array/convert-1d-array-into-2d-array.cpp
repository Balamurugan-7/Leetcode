class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> res;
        if(m*n != original.size())
        return {};
        int i=0;
        while(i < m*n)
        {
            vector<int> v;
            for(int j=0;j<n && i <m*n;j++)
                v.push_back(original[i++]);
            res.push_back(v);
        }
        return res;
    }
};