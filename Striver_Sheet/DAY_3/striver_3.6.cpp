class Solution {
public:
    int merge(vector<int>& nums,int st,int mid,int ed,vector<int>& temp)
    {
        int i=st;
        int j=mid+1;
        int k=st;
        int c=0;
        int z=mid+1;
        for(int i=st;i<=mid;i++){
            while(z<=ed && nums[i]>2*long(nums[z])){
                z++;
            }
            c+=z-(mid+1);
        }
        while(i<=mid && j<=ed){
            if(nums[i]<=nums[j]){
                temp[k]=nums[i];
                i++;
                k++;
            }
            else{
                temp[k]=nums[j];
                j++;
                k++;
            }
        }
        while(i<=mid){
           temp[k]=nums[i];
                i++;
                k++; 
        }
        while(j<=ed){
          temp[k]=nums[j];
                j++;
                k++;  
        }
        for(int i=st;i<=ed;i++){
            nums[i]=temp[i];
        }
        return c;
    }
    int mergesort(vector<int>& nums,int st,int ed,vector<int>& temp){
        if(st>=ed){
            return 0;
        }
        int c=0;
        int mid=st+(ed-st)/2;
        c+=mergesort(nums,st,mid,temp);
        c+=mergesort(nums,mid+1,ed,temp);
        c+=merge(nums,st,mid,ed,temp);
        return c;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp(n,0);
        return mergesort(nums,0,n-1,temp);
    }
};