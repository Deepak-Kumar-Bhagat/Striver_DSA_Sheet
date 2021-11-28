class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr,int sc,int row,int col, int newcolor,int old)
    {
        if(sr<0 || sr>=row || sc<0 ||sc>=col || image[sr][sc]!=old || image[sr][sc]==newcolor)
        {
            return;
        }
        else{
            image[sr][sc]=newcolor;
        }
        dfs(image,sr+1,sc,row,col,newcolor,old);
        dfs(image,sr-1,sc,row,col,newcolor,old);
        dfs(image,sr,sc-1,row,col,newcolor,old);
        dfs(image,sr,sc+1,row,col,newcolor,old);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int row=image.size();
        int col=image[0].size();
        int old=image[sr][sc];
        dfs(image,sr,sc,row,col,newColor,old);
        return image;
    }
};