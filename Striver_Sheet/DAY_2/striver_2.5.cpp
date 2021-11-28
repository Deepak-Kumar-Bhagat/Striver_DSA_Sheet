vector<int> Solution::repeatedNumber(vector<int> &A) {
    int n=A.size();
    int x,y;
    int i=0;
    while(i<n){
        if(A[i]!=i-1){
            if(A[A[i]-1]==A[i]){
                x=A[i];
                y=i+1;
                i++;
            }
            else{
               swap(A[A[i]-1],A[i]);
            }
        }
        else{
            i++;
        }
    }
    return {x,y};
}