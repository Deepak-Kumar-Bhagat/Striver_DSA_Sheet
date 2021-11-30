class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int res=1;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]-1]==0){
                int len=1;
                int temp=nums[i];
                while(m[temp+1]){
                    len++;
                    temp++;
                }
                res=max(res,len);
            }
        }
        return res;
    }
};