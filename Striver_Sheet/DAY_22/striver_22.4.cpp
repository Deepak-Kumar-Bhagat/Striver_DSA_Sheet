vector<int> Solution::dNums(vector<int> &A, int B) {
    vector<int> res;
    unordered_map<int,int> m;
    for(int i=0;i<B;i++){
        m[A[i]]++;
    }
    res.push_back(m.size());
    int j=0;
    for(int i=B;i<A.size();i++){
        if(m[A[j]]==1){
            m.erase(A[j]);
        }
        else{
        m[A[j]]--;
        }
        j++;
        m[A[i]]++;
        res.push_back(m.size());
    }
    return res;
}
