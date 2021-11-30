int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> m;
    int c=0;
    int temp=0;
    for(int i=0;i<A.size();i++){
        temp=temp^A[i];
        if(temp==B){
          c++;
        }
        if(m[temp^B]){
            c+=m[temp^B];
        }
        m[temp]++;
    }
    return c;
}
