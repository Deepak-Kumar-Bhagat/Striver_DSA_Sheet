vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> res;
    int c1=1;
    int c2=0;
    int temp1=arr[0];
    int temp2=-1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]==temp1){
            c1++;
        }
        else if(arr[i]==temp2){
            c2++;
        }
        else if(c1==0){
            temp1=arr[i];
            c1=1;
        }
        else if(c2==0){
            temp2=arr[i];
            c2=1;
        }
        else{
            c1--;
            c2--;
        }
    }
    int p1=0;
    int p2=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==temp1){
            p1++;
        }
        else if(arr[i]==temp2){
            p2++;
        }
    }
        if(p1>(arr.size()/3)){
            res.push_back(temp1);
        }
        if(p2>(arr.size()/3) && temp1!=temp2){
            res.push_back(temp2);
        }
    return res;
}