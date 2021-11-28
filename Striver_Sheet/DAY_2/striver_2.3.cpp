class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i=0;
       int j=0;
       int k=m-1;
       while(i<k){
           if(nums1[i]>nums2[j]){
               swap(nums1[k],nums2[j]);
               k--;
               j++;
           }
           else{
               i++;
           }
       }
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
    }
};