class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int idx=0;
        vector<vector<int>> res;
        for(int i=1;i<intervals.size();i++)
        {
            vector<int>temp1=intervals[idx];
            vector<int> temp2=intervals[i];
            if(temp1[1]>=temp2[0]){
                temp1[1]=max(temp1[1],temp2[1]);
                intervals[idx]=temp1;
            }
            else{
                idx++;
                intervals[idx]=temp2;
            }
        }
        for(int i=0;i<=idx;i++)
        {
            res.push_back(intervals[i]);
        }
        return res;
    }
};