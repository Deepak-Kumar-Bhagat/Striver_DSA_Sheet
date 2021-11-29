class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int res=nums[0];
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(res==nums[i]){
                count++;
            }
            else if(count==0){
                res=nums[i];
                count=1;
            }
            else{
                count--;
            }
        }
        return res;
    }
};