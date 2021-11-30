class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-3;i++)
        {
           for(int j=i+1;j<n-2;j++)
           {
               int low=j+1;
               int high=n-1;
               while(low<high){
                  long sum=long(nums[i])+long(nums[j])+long(nums[low])+long(nums[high]);
                   if(sum==target){
                       vector<int> temp;
                       temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                       s.insert(temp);
                       low++;
                       high--;
                   }
                   else if(sum<target){
                       low++;
                   }
                   else{
                       high--;
                   }
               }
           }
        }
        for(auto t:s){
            res.push_back(t);
        }
        return res;
    }
};