class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int x=mat.size();
        int y=mat[0].size();
        if(x*y != r*c){
            return mat;
        }
        vector<int> all;
        for(int i=0; i<x; i++){
            for( int j=0; j<y ; j++){
                all.push_back(mat[i][j]);
            }
        }
        vector<vector<int>> ans(r,vector<int>(c));
        int k=0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c ; j++){
                ans[i][j]= all[k++];
            }
        }
        return ans;
    }
};
