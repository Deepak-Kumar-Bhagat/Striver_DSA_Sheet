class Solution {
public:
    string getPermutation(int n, int k) {
        string str="";
        int fact=1;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            arr[i]=i+1;
            fact=fact*(i+1);
        }
        k=k-1;
        int r=fact/n;
        while(true){
            str+=to_string(arr[k/r]);
            arr.erase(arr.begin()+k/r);
            if(arr.size()==0){
                break;
            }
            k=k%r;
            r=r/arr.size();
        }
        return str;
    }
};