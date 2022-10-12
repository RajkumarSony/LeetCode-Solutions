class Solution {
public:
vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        for(int i=0;i<numRows-1;++i){
            vector<int>ds;
            for(int j=0;j<=i+1;++j){
                if(j==0 || j==i+1)
                    ds.push_back(1);
                else
                    ds.push_back(ans[i][j]+ans[i][j-1]);
            }
            ans.push_back(ds);
        }
        return ans;
}
};
