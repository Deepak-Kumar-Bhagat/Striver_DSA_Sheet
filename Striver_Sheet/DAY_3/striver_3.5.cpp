class Solution {
public:
    int temp[102][102];
    int helper(int st,int ed,int row,int col ){
        if(st>=row || ed>=col){
            return 0;
        }
        if(st==row-1 && ed==col-1){
            return 1;
        }
        if(temp[st][ed]!=-1){
            return temp[st][ed];
        }
        temp[st][ed]= helper(st+1,ed,row,col)+helper(st,ed+1,row,col); 
        return temp[st][ed];
    }
    int uniquePaths(int m, int n) {
        memset(temp,-1,sizeof(temp));
        return helper(0,0,m,n);
    }
};