class Solution {
public:
    vector<vector<int>> res;
    void helper(vector<int> &can,int idx,int tar,vector<int> &temp){
        if(tar==0){
            res.push_back(temp);
        }
        for(int i=idx;i<can.size();i++){
            if(i>idx && can[i-1]==can[i]){
                continue;
            }
            if(can[i]<=tar){
                temp.push_back(can[i]);
                helper(can,i+1,tar-can[i],temp);
                temp.pop_back();
            }
            else{
                break;
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& can, int tar) {
        vector<int> temp;
        sort(can.begin(),can.end());
        helper(can,0,tar,temp);
        return res;
    }
};