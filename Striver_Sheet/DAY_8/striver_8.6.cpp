bool static comp(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second<b.second;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
   vector<pair<int,int>> temp;
   int n=start.size();
    for(int i=0;i<n;i++){
        temp.push_back({start[i],finish[i]});
    }
    sort(temp.begin(),temp.end(),comp);
    int i=0;
    int j=1;
    int res=1;
    while(j<n){
        if(temp[j].first>=temp[i].second){
            res++;
            i=j;
            j++;
        }
        else{
            j++;
        }
    }
    return res;
}