class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> m;
        int res=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(sum==0){
                res=i+1;
            }
            if(m[sum]){
                res=max(res,(i+1)-m[sum]);
            }
            if(m[sum]==0){
                m[sum]=i+1;
            }
        }
        return res;
    }
};