class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comp(Job a,Job b){
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        int num=0;
        int pro=0;
        int time[101]={0};
        sort(arr,arr+n,comp);
        for(int i=0;i<n;i++)
        {
            int temp=arr[i].dead;
            for(int j=temp;j>=1;j--){
                if(time[j]==0){
                    num++;
                    pro+=arr[i].profit;
                    time[j]=1;
                    break;
                }
            }
        }
        vector<int> res;
        res.push_back(num);
        res.push_back(pro);
        return res;
    } 
};