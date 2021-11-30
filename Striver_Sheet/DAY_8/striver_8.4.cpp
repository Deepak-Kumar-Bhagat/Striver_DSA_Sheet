double maximumValue (vector<pair<int, int>>& items, int n, int W)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    vector<pair<double,int>> temp;
    double pro=0;
    for(int i=0;i<n;i++){
        temp.push_back({(items[i].second*1.0)/(items[i].first*1.0),i});
    }
    sort(temp.begin(),temp.end(),greater<pair<double,int>>());
    for(int i=0;i<n;i++){
        int val=items[temp[i].second].second;
        int wei=items[temp[i].second].first;
        if(wei<=W){
            pro+=val;
            W=W-wei;
            if(W==0){
                break;
            }
        }
        else{
            pro+=W*temp[i].first;
            break;
        }
    }
    return pro;
}