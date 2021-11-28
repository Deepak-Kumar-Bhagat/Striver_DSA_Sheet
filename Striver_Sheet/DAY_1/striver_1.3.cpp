class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1;
        int j;
        int p=0;
        while(i>0){
            if(nums[i-1]<nums[i]){
                p=1;
                j=i-1;
                break;
            }
            i--;
        }
        if(p==0){
            reverse(nums.begin(),nums.end());
            return;
        }
        i=nums.size()-1;
        while(j<i){
            if(nums[i]>nums[j]){
                swap(nums[i],nums[j]);
                break;
            }
            i--;
        }
        reverse(nums.begin()+j+1,nums.end());
    }
};