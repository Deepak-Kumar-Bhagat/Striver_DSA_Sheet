class Solution {
public:
    vector<vector<int>> res;
    void helper(vector<int> &can,int idx,int tar,vector<int> &temp){
        if(idx==can.size()){
            if(tar==0){
                res.push_back(temp);
            }
            return;
        }
        if(can[idx]<=tar){
            temp.push_back(can[idx]);
            helper(can,idx,tar-can[idx],temp);
            temp.pop_back();
        }
        helper(can,idx+1,tar,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& can, int tar) {
        vector<int> temp;
        helper(can,0,tar,temp);
        return res;
    }
};