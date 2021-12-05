class Solution
{
public:
vector<int> res;
void helper(vector<int> arr,int idx,int sum){
    if(idx==arr.size()){
        res.push_back(sum);
        return;
    }
    helper(arr,idx+1,sum+arr[idx]);
    helper(arr,idx+1,sum);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
       helper(arr,0,0); 
       return res;
    }
};