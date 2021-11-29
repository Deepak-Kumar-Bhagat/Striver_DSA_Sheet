class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int n=mat.size();
        int m=mat[0].size();
        int i=0;
        int j=m-1;
        bool p=false;
        while(i<n && j>=0){
            if(mat[i][j]==tar){
                p=true;
                break;
            }
            else if(mat[i][j]>tar){
                j--;
            }
            else{
                i++;
            }
        }
        return p;
    }
};