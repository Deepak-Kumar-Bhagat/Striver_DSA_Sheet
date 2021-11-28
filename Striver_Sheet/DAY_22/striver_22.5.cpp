class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> p;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
            k--;
            if(k<0){
                p.pop();
                k++;
            }
        }
        return p.top();
    }
};